///Another method, accepted..
#include<stdio.h>
int main()
{
    int t,n,c,k,i,max;
    while (scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            max=0;
            scanf("%d",&n);
            for (k=0;k<n;k++)
            {
                scanf("%d",&c);
                if (c>max)
                    max=c;
            }
            printf("Case %d: %ld\n",i,max);
        }
    }
return 0;
}
