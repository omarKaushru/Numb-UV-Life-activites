#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x,fuel,per_hour;
    while(cin>>x>>fuel)
    {
        per_hour=double(x/fuel);
        printf("%.3lf km/l\n",per_hour);
    }
    return 0;
}
