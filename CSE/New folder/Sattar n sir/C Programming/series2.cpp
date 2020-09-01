#include<stdio.h>
#include<conio.h>
int main()
{
     long int i,n,sum,result;
	  printf("\n Enter value of n: ");
      scanf("%d",&n);
	  sum=1;
	   printf("\n Your Series is: ");
	  printf("%d + ",sum);
      
	  for(i=1;i<=n;i=i+2)
     	{
      		result=sum+i;
       		printf("1/%d + ",result);
     	}
       getch();
       }
       
