#include<stdio.h>
#include<conio.h>
main(){
       int a[20],i,n,max;
       printf("enter n=");
       scanf("%d",&n);
       for(i=0;i<n;i++)
       {
        printf("\n enter a[%d]",i);
        scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
        if(max<a[i])
        max=a[i];
        }
        printf("maximam number is %d",max);
        getch();
        }
