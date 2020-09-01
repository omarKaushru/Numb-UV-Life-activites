///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long GCD,LCM;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>GCD>>LCM;
        if(LCM%GCD==0)
        cout<<GCD<<" "<<LCM<<endl;
        else
        cout<<"-1"<<endl;
    }
}
