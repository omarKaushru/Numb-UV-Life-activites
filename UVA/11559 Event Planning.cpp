///Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long frnd,bud,hotel,week,amount,cost=15000000,b,p,visit,i,j,room;
    while(cin>>frnd>>bud>>hotel>>week)
    {
        for(i=0;i<hotel;i++)
        {
            cin>>amount;
            for(j=0;j<week;j++)
            {
                cin>>room;
                p=0;
                if(room>=frnd)
                {
                    p=amount*frnd;
                    if(cost>p)
                    cost=p;
                }
            }
        }
            if(cost>bud)
            cout<<"stay home\n";
            else
            cout<<cost<<endl;
            cost=15000000;
    }
    return 0;
}
