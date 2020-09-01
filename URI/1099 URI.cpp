///Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i,sum,x,y,te;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>x>>y;
        if(x>y)
        {
           for(i=y+1; i<x; i++)
            {
                if(i%2==1)
                sum=sum+i;
            }
        }
        else
        {
            for(i=x+1; i<y; i++)
            {
            if(i%2==1)
            sum=sum+i;
            }
        }

        cout<<sum<<endl;
    }
}
