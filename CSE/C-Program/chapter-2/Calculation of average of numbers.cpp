#include<stdio.h>
#include<conio.h>
main(){
float a,b,c,d,f;
printf("Enter a integer for a :");
scanf("%f",&a);
printf("Enter a integer for b :");
scanf("%f",&b);
printf("Enter a integer for c :");
scanf("%f",&c);
d=a+b+c;
f=d/3;
printf("Addition is: %.3f",d);
printf("\nAvarege is: %.3f",f);
getch();
}
