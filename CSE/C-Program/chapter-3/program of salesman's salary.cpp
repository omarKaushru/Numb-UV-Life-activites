#include<stdio.h>
#include<conio.h>
#define Base_Salary 1500.00
#define Bonus_rate 200.00
#define Commission .02
main(){
       int quantity;
        float gross_salary,price,bonus,commission;
         printf("Enter number of sold computer: ");
          scanf("%d",&quantity);
           printf("Enter price: ");
            scanf("%f",&price);
             bonus=Bonus_rate*quantity;
              commission=Commission*quantity*price;
               gross_salary=Base_Salary+bonus+commission;
                printf("\n\nBonus: %.2f\n\nCommission: %.2f\n\nGross_salary: %.2f",bonus,commission,gross_salary);
                 printf("\n\n\n\t\t\tCourse:  ANSI-C\n\n\t\t\tChapter-3\n\n\t\t\tchapter Title: Operators And Expressions\n\n\t\t\tPage No: 75\n\n\t\t\tCase Studies-1");
                  printf("\n\n\n\t\t\t************");
                   getch();
       }
