///Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[60],sum,c=0,i,minimum_height;
    while(cin>>n &&n)
    {
        c++;
        sum=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        minimum_height=sum/n;
        sum=0;
        for(i=0; i<n; i++)
        {
            if(a[i]>minimum_height)
            {
                sum=sum+(a[i]-minimum_height);
            }
        }
        cout<<"Set #"<<c<<endl;
        cout<<"The minimum number of moves is "<<sum<<"."<<endl;
        cout<<endl;
    }
    return 0;
}
