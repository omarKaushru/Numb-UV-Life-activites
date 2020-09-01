///Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int tc,c,val,M,i,j,k,L,n[200];
    double price;
    char text[10000],x[200];
    while(scanf("%ld\n",&tc)==1)
    {
        for(k=1;k<=tc;k++)
        {
            price=0;
            scanf("%ld\n",&val);
            for(j=1;j<=val;j++)
            {
                scanf("%c%ld\n",&x[j],&n[j]);
            }
            scanf("%ld\n",&M);
            for(j=1;j<=M;j++)
            {
                gets(text);
                L=strlen(text);
                for(i=1;i<=val;i++)
                {
                    for(c=0;c<L;c++)
                    {
                        if(x[i]==text[c])price+=n[i];
                    }
                }
            }
            printf("%.2lf$\n",price/100);
        }
    }
return 0;
}
