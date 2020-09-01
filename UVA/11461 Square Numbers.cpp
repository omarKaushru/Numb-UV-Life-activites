///Accepted
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,ans;
    float f;
    while(scanf("%d%d",&a,&b)==2 && (a!=0 || b!=0))
    {
        f=sqrt(a);
        c=sqrt(a);
        d=sqrt(b);
        ans=d-c;
        if(f==c)
        ans=ans+1;
        printf("%d\n",ans);
    }
    return 0;
}
