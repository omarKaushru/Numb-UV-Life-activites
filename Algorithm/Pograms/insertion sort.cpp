#include <stdio.h>
int main()
{
	int a[40], n,i,temp,ptr,k;
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	scanf("%d",&a[i]);
	for(k=2; k<=n; k++)
	{
		temp=a[k], ptr=k-1;
		while(temp<a[ptr])
		{
			a[ptr+1]=a[ptr]; //Moves the elemnent to the forward;
			ptr=ptr-1;
		}
		a[ptr+1]=temp; //insert the elemnets in its proper place;
	}
	printf("Sorted data:");
	for(i=1; i<=n; i++)
	printf("%d ",a[i] );
	return 0;
}
