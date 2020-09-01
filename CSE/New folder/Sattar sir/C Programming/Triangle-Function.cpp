#include<stdio.h>
#include<conio.h>
#include<math.h>
float triangle(float x,float y,float z);
main(){
       float a,b,c,area;
       printf("\n Enter your first Lenth: ");
       scanf("%f",&a);
       printf("\n Enter your 2nd Lenth: ");
       scanf("%f",&b);
       printf("\n Enter your 3rd Lenth: ");
       scanf("%f",&c);
       area=triangle(a,b,c);
       printf("\n Triangle Area is: %f",area);
       getch();
       }  
       float triangle(float x,float y,float z)
       {
             float s, result ;
             s = x + y + z; 
             result=sqrt(s*(s-x)*(s-y)*(s-z));
             return (result);
             }
