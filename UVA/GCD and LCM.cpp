#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if(b==0)
    return a;
    return (gcd(b,a%b));
}

int main()
{
    long long a,b,g,l;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        g=gcd(a,b);
        l=(a*b)/g;
        cout<<g<<" "<<l<<endl;
    }
}
