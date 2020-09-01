#include<stdio.h>
#include<conio.h>
float ADD(float x,float y);
float SUB(float x,float y);
float MULT(float x,float y);
float DIV(float x,float y);
main(){
       float a,b,add,sub,div,mult;
       printf("enter a");
       scanf("%f",&a);
       printf("enter b");
       scanf("%f",&b);
       add=ADD(a,b);
       sub=SUB(a,b);
       mult=MULT(a,b);
       div=DIV(a,b);
       printf("\n add is %.1f",add);
       printf("\n sub is %.1f",sub);
       printf("\n mult is %.1f",mult);
       printf("\n div is %.1f",div);
       getch();
       }
       float ADD(float x,float y){
             float c;
             c=x+y;
             return c;
             }
float SUB(float x,float y){
             float c;
             c=x-y;
             return c;
             }
float MULT(float x,float y){
             float c;
             c=x*y;
             return c;
             }
float DIV(float x,float y){
             float c;
             c=x/y;
             return c;
             }
