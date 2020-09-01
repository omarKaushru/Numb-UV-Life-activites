/*
  Name: Make diamond by star
  Copyright: Universal
  Author: Kaushru. Spring 14
  Date: 09/04/2015 10:49am
*/
#include<stdio.h>
#include<conio.h>
main(){
int i,j,k;
for(i=1; i<=22; i=i+2)
{
for(k=i; k<75; k=k+2){
printf(" ");
}
for(j=1; j<=i; j++){
printf("*");
}
printf("\n");
}
for(i=22; i!=0; i=i-2)
{
for(k=i; k<75; k=k+2){
printf(" ");
}
for(j=2; j<=i; j++){
printf("*");
}
printf("\n");
}
printf("\t\t\t\t\t\v\v Kaushru. Spring14");
getch();
}
