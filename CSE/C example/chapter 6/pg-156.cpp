#include<stdio.h>
#include<conio.h>
main(){
	int count, n;
	float x,y;
	printf("enter the value of x and n: ");
	scanf("%f %d", &x, &n);
	y=1.0;
	count= 1;
	while(count<=n){
		y=y*x;
		count++;
	}
	printf("\nx=%f; n=%d; x to power n= %f\n",x,n,y);
	printf("ch-6,page-156");
	scanf("%ch");
}
