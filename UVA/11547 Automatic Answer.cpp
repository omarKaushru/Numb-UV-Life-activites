///Accepted

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n,t,a1,a2,a3,a4,a5,a6,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a1=n*567;
        a2=a1/9;
        a3=a2+7492;
        a4=a3*235;
        a5=(a4/47)-498;
        a6=a5%100;
        ans=abs(a6/10);
        cout<<ans<<endl;
    }
}
