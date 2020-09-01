#include<stdio.h>
#include<conio.h>
int main()
{
     long int i,n,sum,result;

      scanf("%d",&n);
sum=0;
      for(i=1;i<=n;i=i+2)
     {
      result=sum+1/i;

     printf("%d ",result);
     }
     
       getch();
       }
