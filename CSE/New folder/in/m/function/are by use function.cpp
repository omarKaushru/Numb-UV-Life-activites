#include<stdio.h>
#include<conio.h>
#define PI 3.1416

float AREA(float x);

main(){
       float r,area;
       printf("enter r  =");
       scanf("%f",&r);
       area=AREA(r);
        printf("area is=%f",area);
       getch();
       }
       float AREA(float x){
       float k;
       k=PI*x*x;
       return k;
       }
