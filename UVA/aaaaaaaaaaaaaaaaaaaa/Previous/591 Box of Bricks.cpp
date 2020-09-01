///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[51],n,i,min_hiegth,sum,c=0;
    while(cin>>n && n)
    {
        sum=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        min_hiegth=sum/n;
        sum=0;
        for(i=0; i<n; i++)
        {
            if(a[i]>min_hiegth)
            {
                sum=sum+(a[i]-min_hiegth);
            }
        }
        cout<<"Set #"<<++c<<endl;

        cout<<"The minimum number of moves is "<<sum<<".\n\n";
    }
}
