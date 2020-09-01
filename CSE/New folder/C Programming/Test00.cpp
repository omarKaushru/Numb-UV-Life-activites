#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.1416
main()
{
float r,area,volume;

printf("\n Enter the value of r: ");
scanf("%f",&r);  

area=4*PI*r*r*r;
printf("\n Area: %f",area);

volume=(4/3)*PI*r*r;
printf("\n Volume is: %f ",volume);

getch();
}
