#include<stdio.h>
#include<conio.h>
int add(int n);
main(){
       int n;
       printf("enter n=");
       scanf("%d",&n);
       printf("sum=%d",add(n));
       getch();
       }
       int add(int n){
           if(n!=0)
           return n+add(n-1);
           }
           
      
