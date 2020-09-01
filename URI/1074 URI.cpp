///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,i;
    while(cin>>t)
    {
        while(t--)
        {
            cin>>n;
            if(n==0)
            cout<<"NULL"<<endl;
            else if(n%2==0 && n<0)
            cout<<"EVEN NEGATIVE"<<endl;
            else if(n%2==0 && n>0)
            cout<<"EVEN POSITIVE"<<endl;
            else if(n%2!=0 && n<0)
            cout<<"ODD NEGATIVE"<<endl;
            else if(n%2!=0 && n>0)
            cout<<"ODD POSITIVE"<<endl;
        }
    }
    return 0;
}
