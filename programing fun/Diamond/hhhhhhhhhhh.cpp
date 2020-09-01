#include<stdio.h>
#include<conio.h>
main(){
int i,j;
for(i=0; i<=12; i++)
{

for(j=1; j<=i; j++){
printf("*");
}
printf("\n");
}
//////////////////////////////
for(i=12; i!=0; i--)
{
for(j=1; j<=i; j++){
printf("*");
}
printf("\n");
}
getch();
}
