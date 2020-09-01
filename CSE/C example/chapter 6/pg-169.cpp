#include<stdio.h>
#include<conio.h>
#define LOOP		100
#define ACCURACY	0.0001
main(){
	int n;
	float x, term, sum;
	printf("Input value for x: ");
	scanf("%f", &x);
	sum=0;
	for(term=1, n=1; n<=LOOP; ++n)
	{
		sum+=term;
		if(term<=ACCURACY)
		goto output;
		term*=x;
	}
	printf("\n FINAL VALUE OF N IS NOT SUFFICIENT\n");
	printf("TO ACHIVE DESIRED ACCURACY \n");
	goto end;
	output:
	printf("\n EXIT FROM LOOP: \n");
	printf("Sum =%f; NO. of terms= %d\n", sum , n);
	end:
	;
	getch();
}
