///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n,m,a,i,j,ans,sum;
    while(cin>>n>>m && (n>0 && m>0))
    {
        sum=0;
        cout<<n<<" "<<m<<" ";
        if(n>m)
        {
            a=n;
            n=m;
            m=a;
        }
        for(i=n; i<=m; i++)
        {
            ans=1;
            for(j=i; j!=1; j=j)
            {
                if(j%2==0)
                j=j/2;
                else
                j=j*3+1;
                ans=ans+1;
            }
            if(ans>=sum)
            sum=ans;
        }
        cout<<sum<<endl;
    }

}
