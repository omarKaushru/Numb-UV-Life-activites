///Accepted
#include <iostream>
using namespace std;

int main()
{
    int t,n,a[10001],i,j,temp,k;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        for(j=1; j<=n; j++)
        {
            cin>>a[j];
        }
        for(j=1; j<=n; j++)
        {
            for(k=j; k<n; k++)
            {
                if(a[j]>a[k+1])
                {
                    temp=a[j];
                    a[j]=a[k+1];
                    a[k+1]=temp;
                }
            }
        }
        cout<<"Case "<<i<<": "<<a[n]<<endl;
    }
    return 0;
}

