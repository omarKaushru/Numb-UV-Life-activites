#include<stdio.h>
#include<conio.h>
main(){
       float sum,n,term;
       int count=1;
       sum=0;
       printf("Enter n=");
       scanf("%f",&n);
       term=1.0/n;
       while(count<=n){
                       sum=sum+term;
                       count++;
                       }
                       printf("Sum=%f\n",sum);
                       printf("\n\n\n\t\t\tProgram:  ANSI-C\n\n\t\t\tChapter-3\n\n\t\t\tchapter Title: Operators And Expressions\n\n\t\t\tPage No: 67\n\n\t\t\tProgram: 3.6");
                       printf("\n\n\n\t\t\t************");
                       getch();
                       }
