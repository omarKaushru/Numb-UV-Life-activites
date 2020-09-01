#include<stdio.h>
#include<conio.h>
#define PI 3.1416
float AREA(float x);
float SIR(float x);

main(){
       float r,area,area2;
       printf("enter r  =");
       scanf("%f",&r);
       area=AREA(r);
       
        printf("area is  =%.2f",area);
         printf("\narea2 is  =%.2f",area2);
       getch();
       }
       float AREA(float x){
        area2=SIR(r);     
     
       }
          float SIR(float x){
                  float k;
       k=PI*x*x;
       return k;
       float o;
       o=(4/3)*PI*x*x*x;
       return o;
       }
