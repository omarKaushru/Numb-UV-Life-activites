#include<stdio.h>
#include<conio.h>
main(){
       int n,i,a[30],max;
       printf("n=");
       scanf("%d",&n);
       for(i=0;i<n;i++)
       {
       printf("\n enter a[%d]",i);
       scanf("%d",&a[i]);
       }
       for(i=0;i<n;i++)
       {
       if(max<a[i])
       max=a[i];
       }
       printf("maximum is =%d",max);
       getch();
       }
