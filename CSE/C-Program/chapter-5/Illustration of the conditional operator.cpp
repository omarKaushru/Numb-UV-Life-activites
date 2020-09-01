#include<stdio.h>
#include<conio.h>
#define Maxloan 50000
main(){
       int loan1,loan2,loan3,sancloan,sum23;
       printf("Enter the value of previoud two loans:\n");
       scanf("%d %d",&loan1,&loan2);
       printf("\nEnter the value of new loan\n");
       scanf("%d",&loan3);
       sum23=loan2+loan3;
       sancloan=(loan1>0)?0:((sum23>Maxloan)?Maxloan-loan2:loan3);
       printf("\n\n");
       printf("Previous lons pending:\n%d%d\n",loan1,loan2);
       printf("loan requested=%d\n",loan3);
       printf("loan sanctioned=%d\n",sancloan);
       printf("\n\n\n\t\t\tProgram:  ANSI-C\n\n\t\t\tChapter-5\n\n\t\t\tchapter Title: Decision Making And Branching\n\n\t\t\tPage No: 132\n\n\t\t\tProgram: 5.7");
                  printf("\n\n\n\t\t\t************");
       getch();
       }
