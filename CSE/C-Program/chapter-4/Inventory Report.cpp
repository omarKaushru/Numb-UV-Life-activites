#include<stdio.h>
#include<conio.h>
//#define ITEMS 1
main(){
       int ITEMS,i,quantity[5];
       float rate[5],value,total_value;
       int code[5][5];
       printf("Enter number of ITEMS: ");
       scanf("%d",&ITEMS);
       for(i=1;i<=ITEMS;i++){
                       printf("Enter code,quantity,rate:");
                       scanf("%s\n%d\n%f",code[i],&quantity[i],&rate[i]);
                       }
       printf("\n\n");
       printf(" INVENTORY REPORT \N");
       printf("--------------------\n");
       printf("Code      Quantity      Rate            Value \n");
       printf("----      --------     -----             -----\n");
      // total_value=0;
       for(i=1;i<=ITEMS;i++){
                             value=quantity[i]*rate[i];
                             printf("%.2s       \t%.2d     \t%.2f      \t%.2f\n",code[i],quantity[i],rate[i],value);
                             total_value+=value;
                             }
                       printf("--------------------------------------------------------\n");
                       printf("              Total value=              %.2f\n",total_value);
                       printf("\n\n\n\t\t\tCourse:  ANSI-C\n\n\t\t\tChapter-4\n\n\t\t\tchapter Title: Managing Input And Output Operations\n\n\t\t\tPage No: 105\n\n\t\t\tProgram: Case Study-1");
                       printf("\n\n\n\t\t\t************");
                       getch();
                       }
