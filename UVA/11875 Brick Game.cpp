///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a[10],i,j;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        for(j=0; j<n; j++)
        cin>>a[j];
        sort(a,a+n);
        int temp=(n/2);
        cout<<"Case "<<i<<": "<<a[temp]<<endl;
    }
}
