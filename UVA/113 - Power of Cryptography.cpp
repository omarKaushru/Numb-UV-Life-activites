#include <bits/stdc++.h>
using namespace std;
int main()
{
    double p,n,ans;
    while(cin>>p>>n)
    {
        ans=0;
        ans=pow(n,(1/p));
        printf("%.0lf\n",ans);
    }
    return 0;
}
