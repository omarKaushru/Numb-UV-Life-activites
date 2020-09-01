///Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i,sum,x,y,te;
    while(cin>>x>>y)
    {
        if( x<=0 || y<=0)
        break;
        sum=0;
        if(x>y)
        {
           for(i=y; i<=x; i++)
            {
               cout<<i<<" ";
                sum=sum+i;
            }
             cout<<"Sum="<<sum<<endl;
        }
        else
        {
            for(i=x; i<=y; i++)
            {
                cout<<i<<" ";
                sum=sum+i;
            }
             cout<<"Sum="<<sum<<endl;
        }


    }
}
