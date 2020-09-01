///Accepted level=0
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,t,n,b,c,i,j,ans;
    while(cin>>t)
    {
        for(i=0;i<t;i++)
        {
            ans=0;
            cin>>n;
            for(j=0;j<n;j++)
            {
                cin>>a>>b>>c;
                ans+=a*c;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
