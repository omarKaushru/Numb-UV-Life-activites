#include <stdio.h>
#include <math.h>
double rou(double v, int d)
{
    double fac;
    fac=pow(10.0,d-ceil(log10(fabs(v))));
    return round(v*fac)/fac;
}
int main()
{
    double a,b,c,d,f=1;
    scanf("%lf", &a);
    c=rou(a,9);
    printf("\n%lf ",c);
    return 0;
}
