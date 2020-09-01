///Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,n;
    long int b,c;
    while(cin>>n && (n>=0))
    {
        a=0;
        b=1;
        for(i=0;i<=n;i++)
        {
            c=a+b;
            a=a+1;
            b=c;
        }
        cout<<c<<endl;
    }
    return 0;
}
