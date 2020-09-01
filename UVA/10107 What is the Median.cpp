///Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long input[100000],n,i=0,temp,temp2;
    while(cin>>n)
    {
        input[i]=n;
        temp=i+1;///Becoz we start the input i=0, so to find
                 ///the current size of array we need to add 1 with i
        sort(input, input+temp);
        if(i%2==0)
        cout<<input[i/2]<<endl;
        else
        {
            temp2=input[i/2]+input[(i/2)+1];
            cout<<temp2/2<<endl;
        }
        i++;
    }
}
