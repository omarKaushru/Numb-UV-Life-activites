#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
	int a,b,c,d;
	float x,x1,x2;

	printf("Enter the number a= ");
	scanf("%d",&a);
		printf("Enter the number b= ");
	scanf("%d",&b);
		printf("Enter the number c= ");
	scanf("%d",&c);
	d=b*b-4*a*c;
	if(a==0 && b==0)
	{
		printf("\nNo solution.");
	}
	else if(a==0)
	{
		x=((float)(-c))/((float)(b));
		printf("if a=0,there are only one root.\n x=%f",x);
	}
	else if(d<=0)
	{
		printf("There are no real roots.");
	}
	else
	{
		x1=-b+(sqrt(d)/(2*a));
		x2=-b-(sqrt(d)/(2*a));
		printf("\nX1=%f",x1);
		printf("\nX2=%f",x2);
	}
	getch();
}
