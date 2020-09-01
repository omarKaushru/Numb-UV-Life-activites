///Accepted

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,degree;

    while(cin>>a>>b>>c>>d)
    {
        if(a==0 && b==0 && c==0 && d==0)
        break;
        degree=1080;
        if(a>b)
        degree=degree+(a-b)*9;
        else
        degree=degree+(40-(b-a))*9;

        if(b>c)
        degree=degree+(40-(b-c))*9;
        else
        degree=degree+(c-b)*9;

        if(c<d)
        degree=degree+(40-(d-c))*9;
        else
        degree=degree+(c-d)*9;
        cout<<degree<<endl;
    }
}
