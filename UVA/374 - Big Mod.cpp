///Accepted
#include <bits/stdc++.h>
using namespace std;
long Big_mod(long b, long p, long m)
{
    if(p==0)
    return 1;
    if(p%2==0)
    return (Big_mod(b,p/2,m)*Big_mod(b,p/2,m))%m;
    return (Big_mod(b,p-1,m)*(b%m))%m;
}

int main()
{
    long b,p,m;
    while(cin>>b>>p>>m)
    {
        cout<<Big_mod(b,p,m)<<endl;
    }

return 0;
}
