///Accepted
#include<iostream>
using namespace std;
int main()
{
    int i,j,t,a,b,sum;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b;
        sum=0;
        for(j=a; j<=b; j++)
        {
            if((j%2)!=0)
            sum=sum+j;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}
