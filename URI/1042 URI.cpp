#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int a,b,c,x[5];
    while(cin>>a>>b>>c)
    {
        x[0]=a,x[1]=b,x[2]=c;
        sort(x,x+3);
        for(int i=0; i<3; i++)
        cout<<x[i]<<endl;
        cout<<endl;
        cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    }
    return 0;
}
