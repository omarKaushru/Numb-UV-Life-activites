///Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[21]={1,64,729,4096,15625,46656,117649,
    262144,531441,1000000,1771561,2985984,
    4826809,7529536,11390625,16777216,24137569,
    34012224,47045881,64000000,85766121};
    long long int i,j,n;
    while(cin>>n)
    {
        j=0;
        if(n==0)
        {
            break;
        }
        for(i=0;i<21;i++)
        {
            if(n==a[i])
            {
                j=1;
                break;
            }

        }
        if(j==1)
        {
            cout<<"Special"<<endl;

        }
        else
        {
            cout<<"Ordinary"<<endl;
        }
    }
    return 0;
}
