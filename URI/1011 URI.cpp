#include <bits/stdc++.h>
using namespace std;

int main()
{
    double radius, pi=3.14159, VOLUME;

    while(cin>>radius)
    {
        VOLUME= (4.00/3.00)*pi*radius*radius*radius;
        printf("VOLUME = %.3lf\n",VOLUME);
    }
    return 0;
}
