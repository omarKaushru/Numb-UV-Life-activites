///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s.length()==5)
        cout<<"3"<<endl;
        else
        {
            int cnt=0;
            if(s[0]=='t')
            cnt++;
            if(s[1]=='w')
            cnt++;
            if(s[2]=='o')
            cnt++;

            if(cnt>=2)
                cout<<"2"<<endl;
            else
                cout<<"1"<<endl;
        }
    }
    return 0;
}
