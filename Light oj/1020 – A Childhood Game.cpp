#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)
int main()
{
    int t,i;
    double r,x,y,z;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf",&r);
        x=(2*r)*(2*r);
        y=(pi*r*r);
        z=x-y;
        printf("Case %d: %.2lf",i,z);
        printf("\n");
    }
    return 0;
}
