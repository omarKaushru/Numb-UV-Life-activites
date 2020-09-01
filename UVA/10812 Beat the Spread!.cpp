///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s,d;
        cin>>s>>d;
        if(s<d)
        cout<<"impossible"<<endl;
        else
        {
            int ans,ans2;
            ans=(s+d)/2;
            ans2=s-ans;
            if((ans-ans2)==d)
            cout<<ans<<" "<<ans2<<endl;
            else
            cout<<"impossible"<<endl;
        }
    }
}
