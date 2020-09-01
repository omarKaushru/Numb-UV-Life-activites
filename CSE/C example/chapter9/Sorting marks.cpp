#include<stdio.h>
#include<conio.h>
void sort(int m, int x[]);
main(){
	int i;
	int marks[5] = {40, 90, 73, 81, 35};
	printf("Marks before sorting\n");
	for(i=0; i<5; i++){
	printf("%d", marks[i]);
	printf("\t");
  }
	sort(5, marks);
	printf("\nMarks after sorting\n");
	for(i=0; i<5; i++)
	printf("%4d", marks[i]);
	printf("\n");
	getch();
}
void sort(int m, int x[])
{
	int i, j, t;
	for(i=1; i<=m-1; i++)
	for(j=1; j<=m-i; j++)
	if(x[j-1]>= x[j])
	{
		t=x[j-1];
		x[j-1] = x[j];
		x[j] = t;
	}
} 
