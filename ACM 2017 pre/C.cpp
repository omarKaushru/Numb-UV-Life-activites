#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define fs first
#define se second
#define pi 2*acos(0)
#define PI 3.14159265358979323846264338

typedef long long ll;
typedef pair <int,int>pii;
typedef pair<ll,ll>pll;
const int N = 100010;

inline int in()
{
    int x;
    scanf("%d", &x);
    return x;
}
inline ll lin()
{
    ll x;
    scanf("%lld",&x);
    return x;
}

int main()
{
    int test = in(),kase = 0;
    while(test--)
    {
        ll a1 = lin(),d1 = lin(),k1=lin();
        ll sum1 = (2ll*a1)+(k1-1ll)*d1;
        sum1*=k1;
        sum1/=2ll;
        ll a2= lin(),d2 = lin(),k2 = lin();
        ll sum2 = 2ll*a2+(k2-1ll)*d2;
        sum2*=k2;
        sum2/=2ll;
        printf("Case%d: %lld\n",++kase,sum1+sum2);
    }
    return 0;
}
