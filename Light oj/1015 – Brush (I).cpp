#include <stdio.h>
int main()
{
    int t,n,m,sum=0,i,j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        sum=0;
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            scanf("%d",&m);
            if(m>0)
            {
                sum=sum+m;
            }
        }
        printf("Case %d: %d",i,sum);
        printf("\n");
            }
    return 0;
}
