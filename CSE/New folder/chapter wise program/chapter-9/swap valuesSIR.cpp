#include<stdio.h>
#include<conio.h>
int swap(int x, int y );
main(){
       int a,b;
       printf("enter a=");
       scanf("%d",&a);
       printf("enter b=");
       scanf("%d",&b);
       swap(a,b);
       //printf("a is=%d",a);
       //printf("b is=%d",b);
       getch();
       }
       int swap(int x, int y ){
       int m;
       m=x+y;
       x=m-x;
       y=m-x;
       printf("a is=%d",x);
       printf("b is=%d",y);
       return x;
       return y;
       }
