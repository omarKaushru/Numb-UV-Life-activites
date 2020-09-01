///Accepted

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h1,m1,h2,m2;
    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
        break;

        int h,m,total_minutes;
        h=h2-h1;
        m=m2-m1;
        if(m<0)
        {
            m=m+60;
            h=h-1;
        }
        if(h<0)
        h=h+24;
        total_minutes=h*60+m;
        cout<<total_minutes<<endl;
    }
}
