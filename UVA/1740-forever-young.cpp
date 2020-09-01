#include <iostream>
#include <vector>
#include <cstdint>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
class ConvertedNumber
{
public:
    bool operator<(const ConvertedNumber& other) const
    {
        if(digits.size() < other.digits.size())
        {
            return true;
        }
        if(digits.size() > other.digits.size())
        {
            return false;
        }
        for(int d = digits.size() - 1; d >= 0; d--)
        {
            if(digits[d] < other.digits[d])
                return true;
            if(digits[d] > other.digits[d])
                return false;
        }
        return false;
    }
    bool operator==(const ConvertedNumber& other) const
    {
        if(digits.size() != other.digits.size())
        {
            return false;
        }
        for(size_t d = 0; d < digits.size(); d++)
        {
            if(digits[d] != other.digits[d])
            {
                return false;
            }
        }
        return true;
    }
public:
    // least significant -> most significant
    vector<int64_t> digits;
    // the base that this number was converted to
    int64_t base;
    // valid is true if contains all base10 digits
    bool valid;
};
// The only math you actually need to solve the problem LOL //
void convertNumber(int64_t y, int64_t b, ConvertedNumber& convertedOut)
{
    convertedOut.digits.clear();
    convertedOut.base = b;
    convertedOut.valid = true;
    while(y > 0)
    {
        convertedOut.digits.push_back(y%b);
        if(convertedOut.digits.back() > 9)
            convertedOut.valid = false;
        y /= b;
    }
}
// This is the meat of the solution //
// we assume that there exists a valid ConvertedNumber within the range baseMin,baseMax
//  a return value < 0 means we could not find an answer withing the range of bases
//  However, we can guarantee that we always have at minimum ONE valid base
//  BECAUSE: any number base 10 is valid!
int64_t findLargestBase(int64_t baseMin, int64_t baseMax, int64_t Y)
{
    ConvertedNumber convertedMin, convertedMax;
    convertNumber(Y,baseMin,convertedMin);
    convertNumber(Y,baseMax,convertedMax);
    // This is why the solution is so fast:
    //  We can cull HUGE portions of potential bases that meet
    //  a certain criteria which GUARANTEES that there is
    //  no valid numbers within this range of bases!
    if(convertedMin.digits.size() == convertedMax.digits.size())
    {
        for(int d = convertedMin.digits.size() - 1; d >= 0; d--)
        {
            if(convertedMin.digits[d] < 10 &&
               convertedMax.digits[d] < 10)
            {
                if(convertedMin.digits[d] != convertedMax.digits[d])
                {
                    break;
                }
                continue;
            }
            if(convertedMin.digits[d] < 10 ||
               convertedMax.digits[d] < 10)
            {
                break;
            }
            // At this point, we can guarantee NO valid
            //  converted numbers within the range of bases!
            return -1;
        }
    }
    if(convertedMax.valid)
    {
        return convertedMax.base;
    }
    if(baseMax - baseMin > 1)
    {
        int64_t baseMid = (baseMax + baseMin)/2;
        int64_t largestSubBase = findLargestBase(baseMid, baseMax - 1, Y);
        if(largestSubBase >= 0)
        {
            return largestSubBase;
        }
        largestSubBase = findLargestBase(baseMin + 1, baseMid, Y);
        if(largestSubBase >= 0)
        {
            return largestSubBase;
        }
    }
    if(convertedMin.valid)
    {
        return convertedMin.base;
    }
    return -1;
}
int main()
{
    int64_t Y,L;
    int64_t baseLow,baseHigh,baseMid;
    int64_t baseMaxForL;
    ConvertedNumber convertedL,convertedLow,convertedHigh,convertedMid;
    while(cin>>Y)
    {
        cin>>L;
        // first let's find largest (potentially invalid, but that's OK) base for L //
        //  O(log(N))
        convertNumber(L,10,convertedL);
        baseLow = 10;
        convertNumber(Y,baseLow,convertedLow);
        baseHigh = Y;
        convertNumber(Y,baseHigh,convertedHigh);
        if(convertedLow == convertedL)
        {
            baseMaxForL = baseLow;
        }
        else if(convertedHigh == convertedL)
        {
            baseMaxForL = baseHigh;
        }
        else
        {
            // perform bisection //
            while(baseHigh - baseLow > 1)
            {
                baseMid = (baseLow + baseHigh)/2;
                convertNumber(Y, baseMid, convertedMid);
                if(convertedMid < convertedL)
                {
                    // smaller converted# -> higher base value!
                    baseHigh = baseMid;
                    convertedHigh = convertedMid;
                }
                else
                {
                    baseLow = baseMid;
                    convertedLow = convertedMid;
                }
            }
            if(convertedHigh < convertedL)
            {
                baseMaxForL = baseLow;
            }
            else
            {
                baseMaxForL = baseHigh;
            }
        }
        // Now we can do some crazy recursive depth-first divide/conquer //
        //  at this point: our range of bases is [10,baseMaxForL]
        //  O(log(n)) somehow lul(!?)
        cout<<findLargestBase(10, baseMaxForL, Y)<<endl;
    }
    return 0;
}
