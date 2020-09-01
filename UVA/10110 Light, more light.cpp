///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long  n,result,t;

    while(cin>>n &&n)
    {
        result=sqrt(n);
        t=result*result;
        if(t==n)
        cout<<"yes\n";
        else
        cout<<"no\n";
    }
}
