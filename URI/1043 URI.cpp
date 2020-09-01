#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,ans;
    while(cin>>a>>b>>c)
    {
        if(a+b>c && b+c>a && a+c>b )
        {
            ans=a+b+c;
            printf("Perimetro = %.1f\n",ans);
        }
        else
        {
            ans=.5*(a+b)*c;
            printf("Area = %.1f\n",ans);
        }
    }
    return 0;
}
