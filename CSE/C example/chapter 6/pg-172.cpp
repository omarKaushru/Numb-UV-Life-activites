#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	int count, negative;
	double number, sqroot;
	printf("Enter 999999 TO STOP\n");
	count =0;
	negative=0;
	while(count<=100)
	{
		printf("Enter a number: ");
		scanf("%lf",&number);
		if(number==999999)
		break;
		if(number<0)
		{
			printf("Number is negative\n\n");
			negative++;
			continue;
		}
		sqroot=sqrt(number);
		printf("Number	=%lf\n Square root= %lf\n\n",number,sqroot);
		count++;
	}
	printf("Number of items done = %\n", count);
	printf("\n\nNegative items = %d\n", negative);
	printf("END OF DATA\n");
}
