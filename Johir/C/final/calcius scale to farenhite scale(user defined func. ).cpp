#include <stdio.h>
#include <conio.h>
 float f1(float x,float y);
main()
{
	float a,s,f;
	printf("temparature in calcius scale=   ");
	scanf("%f", &a);
	
    f=f1(a,s);
    
    printf("\ntemparature in farenhite scale= %.2f", f);
    getch();
    }
    float f1(float x,float y)
     {y=32+(9*x/5);
	 return y;
     }
