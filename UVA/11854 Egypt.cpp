///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int a,b,c,res1,res2;

    while(cin>>a>>b>>c)
    {
        if(a==0 && b==0 && c==0)
        break;
        if(c>a && c>b)
        {
            res1=a*a+b*b;
            res2=c*c;
        }
        else if(b>a && b>c)
        {
            res1=a*a+c*c;
            res2=b*b;
        }
        else
        {
            res1=c*c+b*b;
            res2=a*a;
        }
        if(res1==res2)
        cout<<"right"<<endl;
        else
        cout<<"wrong"<<endl;
    }
}
