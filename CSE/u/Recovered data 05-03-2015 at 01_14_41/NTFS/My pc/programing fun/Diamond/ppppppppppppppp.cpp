/*
  Name: Star.
  Copyright: Universal
  Author: Md. Omar kaushru Robel
  Date: 29/03/15 22:10
  Description: Decoration by ***.
*/

#include<stdio.h>
#include<conio.h>
main(){
int i,j;
for(i=8; i!=0; i--)
{
for(j=5; j!=0; j--){
printf(",");
}
for(j=1; j<=i; j++){
printf("*");
}
printf("\n");

}
getch();
}
