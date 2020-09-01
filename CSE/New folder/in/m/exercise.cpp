#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
       char string[]="HELLO WORLD";
       int m;
       for(m=0; string[m]!='\0'; m++)
       if((m%2)==0)
       printf("%c",string[m]);
       getch();
       }
