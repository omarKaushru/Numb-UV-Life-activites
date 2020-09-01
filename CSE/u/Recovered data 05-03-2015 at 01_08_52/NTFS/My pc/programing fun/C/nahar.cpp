#include<stdio.h>
#include<conio.h>
main(){
int c,d;
char string[]="Nahar and Hasan they are my perents";
printf("\n");
printf("..........................................");
for(c=0; c<=34; c++)
{
d=c+1;
printf("\n-> %-38.*s}\n",d,string);
}
printf("..........................................");

getch();
}
