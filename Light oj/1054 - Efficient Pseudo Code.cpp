///Accepted

#include<bits/stdc++.h>
using namespace std;
#define srt 65540
#define mod 1000000007
typedef long long ll;
ll prime[srt];
ll k,t;
void seive()
{
    bool ara[srt];
    memset(ara,0,sizeof(ara));
    for(int i=2,k=0;i<srt;i++)
    {
        if(ara[i]==0)
        {
                prime[k++]=i;
                for(int j=i;j<srt;j=i+j)
                    ara[j]=1;
        }
        t=k;
    }
}
ll Pow (ll x,ll y)
 {
     ll number = 1;
     while (y>0)
     {
         if (y % 2==1)
         {
             number = (number * x) % mod;
         }
        x = (x * x) % mod;
         y>>=1;

     }
    return number;
 }
ll  sum(ll a,ll b)
{
      ll total,res;
        res=(Pow(a,b)-1)%mod;
           res=(res*Pow(a-1,mod-2))%mod;
        return (res+mod)%mod;//(res+mod) akto vable apnara pea jaben

}
int main()
{
    ll n,m,cnt,num,T,l=0,total;
    cin>>T;
    seive();
    while(T--)
    {
    scanf("%lld%lld",&n,&m);
    total=1;
    for(int i=0;i<t;i++)
    {
           cnt=0;
           num=0;
        if(n%prime[i]==0)
        {
                num=prime[i];
                while(n%prime[i]==0)
                {
                    n/=prime[i];
                    cnt++;
                }
                total=(total*sum(num,cnt*m+1))%mod;

        }

    }
   if(n!=1)
    {
        total=(total*sum(n,m+1))%mod;

    }

     printf("Case %lld: %lld\n",++l,total);
    }

    return 0;
}
