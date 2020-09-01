///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int sl=s.size();
        list<char>lst;
        list<char>::iterator it;
        it=lst.end();
        for(int i=0;i<sl;i++)
            if(s[i]=='[')
            it=lst.begin();
            else if(s[i]==']')
            it=lst.end();
            else lst.insert(it, s[i]);
        for(it=lst.begin();it!=lst.end();it++)
            cout<<*it;
        cout<<endl;

    }
    return 0;
}
