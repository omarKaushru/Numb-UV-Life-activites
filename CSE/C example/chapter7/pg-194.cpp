#include<stdio.h>
#include<conio.h>
main(){
	int i;
	float x[10],value,total;
	printf("ENTER 10 REAL NUMBERS\n");
	for(i=0;i<10;i++){
		scanf("%f", &value);
		x[i]=value;
	}
	total=0.0;
	for(i=0;i<10;i++)
	total=total+x[i]*x[i];
	printf("\n");
	for(i=0;i<10;i++)
	printf("x[%2d]=%5.2f\n",i+1,x[i]);
	printf("\ntotal=%.2f\n",total);
	printf("chapter-7, program-1, page-194");
}
