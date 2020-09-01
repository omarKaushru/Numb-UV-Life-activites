#include<stdio.h>
#include<conio.h>
float ADD(float x, float y);
float SUB(float x, float y);
float MULT(float x, float y);
float DIV(float x,float y);
main(){
       float a,b,sum,sub,mul,div;
       printf("enter a  =");
       scanf("%f",&a);
       printf("enter b  =");
       scanf("%f",&b);
       sum=ADD(a,b);
       sub=SUB(a,b);
       mul=MULT(a,b);
       div=DIV(a,b);
       printf("\nsum is=%.2f",sum);
        printf("\nsub is=%.2f",sub);
         printf("\nmul is=%.2f",mul);
        printf("\ndiv is=%.2f",div);
       getch();
       }
       float ADD(float x, float y){
       float c;
       c=x+y;
       return c;
       }
        float SUB(float x, float y){
       float c;
       c=x-y;
       return c;
       }
       float MULT(float x, float y){
       float c;
       c=x*y;
       return c;
       }
        float DIV(float x, float y){
       float c;
       c=x/y;
       return c;
       }
       
