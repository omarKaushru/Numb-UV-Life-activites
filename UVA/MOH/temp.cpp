///Time limit
///10394 - Twin Primes
#include <bits/stdc++.h>
using namespace std;
int flag=0;
int isPrime(long long n)
{
    if(n<=1)
    return 0;
    for(long long i=2; i<n; i++)
    if(n%i==0)
    return 0;
    return 1;
}
int main()
{
    long long n,temp1,temp2,i,c;
    bool temp3;
    while(cin>>n)
    {
        flag=0,c=0;
        for(i=2; ;i++)
        {
            temp3=isPrime(i);
            if(temp3==true)
            {
                temp1=i;
                temp3=isPrime(i+2);
                if(temp3==true)
                c++;
            }
            if(c==n)
            break;
        }
        cout<<temp1<<" "<<(temp1+2)<<endl;
    }
}
