#define COLMAX 10
#define ROWMAX 12
#include<conio.h>
#include<stdio.h>
main(){
	int row, column,y;
	row=1;
	printf("	MULTIPLICATION TABLE	\n");
	printf("----------------------------------------\n");
	do
	{
		column =1;
		do
		{
			y=row*column;
			printf("%4d", y);
			column=column+1;
		}
		while (column<=COLMAX);
		printf("\n");
		row=row+1;
	}
	while (row<=ROWMAX);
	printf("-----------------------------------------\n");
getch();
}

