#include <bits/stdc++.h>
using namespace std;
long GCD(long pi,long i)
{
    if(i==0)
    return pi;
    return GCD(i,pi%i);
}
int main()
{
    long p,q,pi,n,e;
    while(cin>>p>>q)
    {
        pi=(p-1)*(q-1);
        for(int i=2; i<pi; i++)
        if(GCD(pi,i)==1)
        {
            e=i;
            cout<<e<<" ";
        }
    }
}
