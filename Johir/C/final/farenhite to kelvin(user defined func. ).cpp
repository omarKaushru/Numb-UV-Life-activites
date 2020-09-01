#include <stdio.h>
#include <conio.h>
 float kelvin(float x,float y);
main()
{
	float a,s,f;
	printf("enter temparature in farenhite scale : ");
	scanf("%f", &a);
	
    f=kelvin(a,s);
    
printf("\ntemparature in kelvin= %.2f", f);
	getch();
}
    float kelvin(float x,float y)
     {y=((x-32)/1.8)+273.15;
	 return y;
     }
