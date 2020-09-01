///Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t,i,track,j,n;
    long double a0,a_n_plus_1,csum,c,a1;
    cin>>t;
    for(j=1; j<=t; j++)
    {
        track=0,csum=0.0,a1=0.0;
        cin>>n>>a0>>a_n_plus_1;
        track=n*2;
        for(i=1; i<=n; i++)
        {
            cin>>c;
            csum=csum+track*c;
            track=track-2;
        }
        a1=((n*a0+a_n_plus_1)-csum)/(n+1);
        printf("%0.2Lf",a1);
        if(j!=t)
        cout<<"\n\n";
        else
        cout<<"\n";
    }
    return 0;
}
