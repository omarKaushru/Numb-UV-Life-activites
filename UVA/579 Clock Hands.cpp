/// UVA 579	Clock Hands
///accepted
#include <stdio.h>
int main()
{
    int h,m;
    float d,x,y,r;
    while(scanf("%2d:%2d",&h,&m))
    {
        if((h+m)==0)
        break;
        x=h*30+m*.5;
        y=m*6;
        if(x>y)
        {
            d=x-y;
        }
        else
        {
            d=y-x;
        }
        if(d>180)
        {
            r=360-d;
        }
        else
        {
            r=d;
        }
        printf("%.3f\n",r);
    }
    return 0;
}
