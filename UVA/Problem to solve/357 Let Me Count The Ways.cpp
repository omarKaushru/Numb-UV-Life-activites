///Accepted

#include <bits/stdc++.h>
using namespace std;

long long coin[5]={1,5,10,25,50};
long long dp[5][30010];
long long func(long long prev,long long m)
    {
        if(m==0)
        return 1;
        if(m<0)
        return 0;
        if(dp[prev][m]!=-1)
        return dp[prev][m];
        dp[prev][m]=0;
        for(long long i=prev; i<5; i++)
        {
            if((m-coin[i])<0)
            continue;
            dp[prev][m]+=func(i,(m-coin[i]));
        }
        return dp[prev][m];
    }

int main()
{
    long long n;
    long long ans;
    memset(dp,-1,sizeof(dp));
    while(cin>>n)
    {
        ans=func(0,n);
        if(ans==1)
        cout<<"There is only 1 way to produce "<<n<<" cents change."<<endl;
        else
        cout<<"There are "<<ans<<" ways to produce "<<n<<" cents change."<<endl;
    }
return 0;
}
