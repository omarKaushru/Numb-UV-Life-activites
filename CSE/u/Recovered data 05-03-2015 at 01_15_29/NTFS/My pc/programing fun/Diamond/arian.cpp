#include<stdio.h>
#include<conio.h>
int main()
{
int c, r;

for(c=1; c<=12; c++)

{
for(r=1; r<=12-c; r++)

printf(" ");

for(r=1;r<=2*c-1; r++)

printf("*");

printf("\n");

}

for(c=12; c>=1; c--)
{
for(r=1; r<=12-c; r++)

printf(" ");

for(r=1;r<=2*c-1; r++)

printf("*");
printf("\n");
}

printf("\t\tARiyan Riyan-fall 14");

printf("\n\n");

getch();

}
