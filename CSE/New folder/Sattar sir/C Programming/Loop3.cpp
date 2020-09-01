#include<stdio.h>
#include<conio.h>

main()
{
	char c;
	int i,j,n;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=n;j>=i;j--)
			printf("%2c",'*');
	}
	getch();
}
