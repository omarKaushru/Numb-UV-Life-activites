
#include?<stdio.h>
#include<conio.h>
main()
{
int num[10], n, i;
float avg, sum;
printf("How many inputs : ");
scanf("%d", &n);
for(i=0; i<n; i++)
{
printf("enter numbers :");
scanf("%d", &num[i]);
sum = sum+num[i];
}
avg= sum / n;
printf("\n sum of numbers is:%f", sum );
printf("\n avg of numbers is:%f", avg );
getch();
}
