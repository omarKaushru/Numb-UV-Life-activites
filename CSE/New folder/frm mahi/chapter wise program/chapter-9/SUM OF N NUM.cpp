#include<stdio.h>
#include<conio.h>
int SUM(int x);
main(){
       int n,sum;
       printf("enter n=");
       scanf("%d",&n);
       sum=SUM(n);
       printf("\n sum is=%d",sum);
       getch();
       }
int SUM(int x)
{
    if(x!=0)
    return x+SUM(x-1);
    else
    return x;
}
