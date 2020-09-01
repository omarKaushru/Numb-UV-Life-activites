#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a>b & a>c)
        cout<<a<<" eh o maior"<<endl;
        else if(b>c)
        cout<<b<<" eh o maior"<<endl;
        else
        cout<<c<<" eh o maior"<<endl;
    }
    return 0;
}
