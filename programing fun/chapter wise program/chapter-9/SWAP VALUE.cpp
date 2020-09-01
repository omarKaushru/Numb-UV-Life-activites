#include<stdio.h>
#include<conio.h>
int swap(int x,int y);
main(){
       int a,b;
       printf("enter a=");
       scanf("%d",&a);
       printf("enter b=");
       scanf("%d",&b);
       swap(a,b);
       getch();
       }
       int swap(int x,int y){
           int k;
           k=x+y;
           x=k-x;
           y=k-y;
       printf("a is %d",x);
       printf("b is %d",y);
       return(x,y);
       }
