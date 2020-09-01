#include<stdio.h>
#include<conio.h>
int fact(int x);
main(){
       int n,c,r,ncr,npr;
       int fact(int);
       printf("enter n=");
       scanf("%d",&n);
       printf("enter r=");
       scanf("%d",&r);
       ncr=fact(n)/fact(n-r);
       npr=fact(n)/(n*fact(n-r));
       printf("NCR=%d\n",ncr);
       printf("NPR=%d\n",npr);
       getch();
       }
       int fact(int x){
           int f,i;
           f=1;
           for(i=1;i<=x;i++)
           f=f*i;
           return f;
           }
