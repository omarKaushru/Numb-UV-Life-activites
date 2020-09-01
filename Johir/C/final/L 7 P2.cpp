#include<stdio.h>
#include<conio.h>
main(){
       int n,i,a[30],max,b;
       printf("Enter n:");
       scanf("%d",&n);
       for(i=0;i<n;i++)
       {
       printf("\n Enter a[%d] :",i);
       scanf("%d",&a[i]);
       }
       for(i=0;a[i]<n;i++)
       {
       if(a[i]>a[i+1])
       printf("maximum is:%d",a[i]);
       }
       getch();
       }
