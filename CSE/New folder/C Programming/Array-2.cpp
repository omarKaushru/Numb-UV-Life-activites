#include<stdio.h>
#include<conio.h>
main()
     {
     int number[5];
     int i,sum=0;
     float average;
     for(i=0;i<=4;i++)
     {         
     scanf("%d",&number[i]); 
     }
              
     for(i=0;i<=4;i++)
     {
      sum = sum + number[i];
     }
     average =sum/5;
     printf("%f",average); 
     
     getch();
    }
