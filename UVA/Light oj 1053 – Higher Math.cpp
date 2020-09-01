#include <stdio.h>
#include <math.h>
int main()
{
    float res,d,h,a;
    int t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d", &d, &h, &a);
        res=0;
        if(a>d && a>h)
        {
        res=sqrt(pow(d,2)+pow(h,2));
        if(res==a)
        printf("Case %d: yes\n", i);
        else
        printf("Case %d: no\n", i);
        }
       else if(d>a && d>h)
        {
        res=sqrt(pow(a,2)+pow(h,2));
        if(res==d)
        printf("Case %d: yes\n", i);
        else
        printf("Case %d: no\n", i);
        }
        else
        {
        res=sqrt(pow(d,2)+pow(a,2));
        if(res==h)
        printf("Case %d: yes\n", i);
        else
        printf("Case %d: no\n", i);
        }
    }
    return 0;
}
