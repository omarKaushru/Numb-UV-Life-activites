///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long total=0,t,i,money;
    string s;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>s;
        if(s=="donate")
        {
            cin>>money;
            total=total+money;
        }
        else if(s=="report")
        cout<<total<<endl;
    }
}
