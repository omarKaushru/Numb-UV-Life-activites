/*
  Name: Star.
  Copyright: Universal
  Author: Md. Omar kaushru Robel
  Date: 29/03/15 21:52
  Description: Decoration by ***.
*/

#include<stdio.h>
#include<conio.h>
main(){
int c,d;
char string[]="**********************";
printf("\n");
for(c=21; c!=0; c--)
{
d=c;
printf("\ %.*s\n",d,string);
}
getch();
}
