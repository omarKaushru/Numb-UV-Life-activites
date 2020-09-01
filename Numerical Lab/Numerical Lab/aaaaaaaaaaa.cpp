#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d,f=1;
    scanf("%lf", &a);
    c=round(a);
    d=trunc(a);

    f=floor(a);
    printf("\n%lf ",c);
    printf("\n%lf ",d);
    printf("\n%lf ",f);
    return 0;
}
