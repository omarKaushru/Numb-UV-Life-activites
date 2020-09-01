#include <stdio.h>
#include <conio.h>
 float area(float x,float y);
main()
{
	float a,s,f;
	printf("enter value of r : ");
	scanf("%f", &a);
	
    f=area(a,s);
    
printf("\narea of the circle= %.2f", f);
	getch();
}
    float area(float x,float y)
     {
	  y=3.14*x*x;
	 return y;
     }
