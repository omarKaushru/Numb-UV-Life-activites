///Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[3000],temp,dif[3000],c,i;
    while(cin>>n)
    {
        c=1;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n-1; i++)
        {
            dif[i]=abs(a[i]-a[i+1]);
        }
        sort(dif,dif+i);
        for(i=1;i<n;i++)
        {
            if(dif[i]==dif[i-1])
            {
                c=0;
                break;
            }
        }
        if(c!=0)
        cout<<"Jolly\n";
        else
        cout<<"Not jolly\n";
    }
    return 0;
}
