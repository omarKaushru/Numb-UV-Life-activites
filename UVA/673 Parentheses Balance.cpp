///Accepted
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int kk=1, tc, n, m;
    string s;
    cin>>tc;
    getline(cin, s);
    while(tc--)
    {
        getline(cin, s);
        int sl=s.size();
        stack<char>stk;
        for(int i=0;i<sl;i++)
        {
            if(!stk.empty() && s[i]==')' && stk.top()=='(')
                stk.pop();
            else if(!stk.empty() && s[i]==']' && stk.top()=='[')
                stk.pop();
            else stk.push(s[i]);
        }
        if(stk.empty())
            cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}
