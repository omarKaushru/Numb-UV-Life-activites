#include<stdio.h>
#include<math.h>
int main()
{
    double h,m,t,i,j,k;
    while(scanf("%lf:%lf", &h, &m)==2)
    {
        if(h==0 && m==0)
            break;

        i=((h*30)+(m/2));
        j=(m*6);

        t=i-j;

        if(t<0)
            t*=-1;

        if(t>180)
            t=360-t;

        printf("%.3lf\n",t);
    }
    return 0;
}
