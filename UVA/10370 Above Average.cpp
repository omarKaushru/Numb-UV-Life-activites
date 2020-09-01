///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,coun,i,j;
    double a[1001],sum,ave,per;
    cin>>t;
    while(t--)
    {
        sum=0,per=0;
        coun=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }

        ave=sum/n;
        for(i=0; i<n; i++)
        {
            if(a[i]>ave)
            coun++;
        }

        per=(double)(coun*100)/n;
        printf("%.3lf",per);
        cout<<"%"<<"\n";
    }
}
