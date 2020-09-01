#include<stdio.h>
#include<conio.h>
main(){
	float largest(float a[],int n);
	float value[4] = {2.5, -4.75, 1.2, 3.67};
	printf("%.2f\n", largest(value,4));
	getch();
}
float largest(float a[], int n)
{
	int i;
	float max;
	max= a[0];
	for(i=1; i<n; i++)
	if(max<a[i])
	max = a[i];
	return(max);
}
