///Accepted

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,n,i,j,k,l,cas,no;
    cas=0;
    while(scanf("%d %d %d",&s,&t,&n)==3)
    {
        if(s==0 && t==0 && n==0)
        break;
        cas++;
        printf("Case %d:\n",cas);
        no=(s*n)+((n+1)*t);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=t;j++)
            {
                for(k=1;k<=no;k++)
                printf("*");
                printf("\n");
            }
            for(j=1;j<=s;j++)
            {
                for(k=1;k<=n;k++)
                {
                    for(l=1;l<=t;l++)
                    printf("*");
                    for(l=1;l<=s;l++)
                    printf(".");
                }
                for(l=1;l<=t;l++)
                printf("*");
                printf("\n");
            }
        }
        for(j=1;j<=t;j++)
        {
            for(k=1;k<=no;k++)
            printf("*");
            printf("\n");
        }
        printf("\n");
    }
    return 0;

}
