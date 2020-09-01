#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n,sum,t;

    while(cin>>n && n)
    {
        sum=0;
        while(n>=3)
        {
            t=n/3;
            sum=sum+t;
            n=(n%3)+t;
        }
        if(n==2)
        sum++;
        cout<<sum<<endl;
    }
}
