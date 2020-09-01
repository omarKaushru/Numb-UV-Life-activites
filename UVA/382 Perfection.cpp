///Accepted

#include<stdio.h>
#include<string.h>
int main()
{
long long i,t,sum,j,a[100000];
t=0;
while(t<=100000)
{
    scanf("%lld",&a[t]);
    if(a[t]==0)
    break;
    t++;
}
printf("PERFECTION OUTPUT\n");
for(i=0;i<t;i++)
    {
    sum=0;
    if(a[i]<10)
    printf("    ");
    else if(a[i]<100)
    printf("   ");
    else if(a[i]<1000)
    printf("  ");
    else if(a[i]<10000)
    printf(" ");
    printf("%lld  ",a[i]);
    for(j=1;j<=a[i]/2;j++)
    {
        if(a[i]%j==0)
        sum=sum+j;
    }
    if(a[i]==sum)
    printf("PERFECT\n");
    else if(a[i]>sum)
    printf("DEFICIENT\n");
    else if(a[i]<sum)
    printf("ABUNDANT\n");
    }
printf("END OF OUTPUT\n");
return 0;
}
