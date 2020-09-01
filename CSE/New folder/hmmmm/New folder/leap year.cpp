#include<stdio.h>
#include<conio.h>
main(){
       int year;
       printf("enter year  :");
       scanf("%d",&year);
       if(year%4==0)
       printf("\nThis year is leapyear\n\n\n\t\t\t\vThanks!!!");
       else if(year%4!=0)
       printf("\nThis year is not leapyear\n\n\n\t\t\t* \v Thanks!!!");
       getch();
       }
       
