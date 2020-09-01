#include<stdio.h>
#include<conio.h>
int factorial(int n);
main(){
       int num, f;
       printf("\nEnter a positive number  :");
       scanf("%d",&num);
       f=factorial(num);
       printf("\nfactorial is=%d",f);
       getch();
       }
       int factorial(int n){
           if(n==1)
           return 1;
           else
           return(n*factorial(n-1));
           }
