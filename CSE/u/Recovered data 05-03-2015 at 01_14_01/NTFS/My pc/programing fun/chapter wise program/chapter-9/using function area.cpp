#include<stdio.h>
#include<conio.h>
float AREA(float x);
main(){
       float r,area;
       printf("enter r=");
       scanf("%f",&r);
       area=AREA(r);
       printf("area is=%.1f",area);
       getch();
       }
float AREA(float x){
       float c;
       c=3.14*x*x;
       return c;
       }
