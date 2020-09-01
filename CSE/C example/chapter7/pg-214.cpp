#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAXSIZE 100
main(){
	int i,n;
	float value[MAXSIZE], deviation,sum,sumsqr,mean,variance,stddeviation;
	sum=sumsqr=n=0;
	printf("Input values: input-1 to end \n");
	for(i=1; i<MAXSIZE; i++){
		scanf("%f", &value[i]);
		if(value[i]==-1)
		break;
		sum+=value[i];
		n+=1;
	}
	mean=sum/(float)n;
	for(i=1; i<=n; i++)
	{
		deviation= value[i]-mean;
		sumsqr+=deviation*deviation;
	}
	variance=sumsqr/(float)n;
	stddeviation=sqrt(variance);
	printf("\nNumber of items: %d\n",n);
	printf("Mean: %f\n",mean);
	printf("Standard deviation: %f\n",stddeviation);
}
