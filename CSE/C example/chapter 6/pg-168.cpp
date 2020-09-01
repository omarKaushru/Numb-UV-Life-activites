#include<stdio.h>
#include<conio.h>
main(){
	int m;
	float x, sum, average;
	printf("this program compute the average of a set of numbers\n");
	printf("Enter valus one after another\n");
	printf("Enter a NEGATIVE number at the end.\n\n\n");
	sum=0;
	for (m=1; m<=1000; ++m)
	{
		scanf("%f", &x);
		if(x<0)
		break;
		sum+=x;
	}
	average=sum/(float)(m-1);
	printf("\n");
	printf("Number of values= %d\n", m-1);
	printf("sum				=%f\n", sum);
	printf("Average 		=%f\n",average);
}

