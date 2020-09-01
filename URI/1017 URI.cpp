#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int hour,speed;
    double ans;

    while(cin>>hour>>speed)
    {
        ans=double((hour*speed)/12.00);
        printf("%.3lf\n",ans);
    }
    return 0;
}
