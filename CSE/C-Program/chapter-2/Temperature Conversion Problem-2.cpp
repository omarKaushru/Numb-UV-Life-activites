#include<stdio.h>
#include<conio.h>
main(){
       typedef float REAL;
        REAL fahrenhite,celcius;
         fahrenhite=0;
          printf("Fahrenhite ....... Celcius\n\n");
           while(fahrenhite<=250){
                                    celcius=(fahrenhite-32.0)/1.8;
                                    printf("%.1f     .......   %.2f\n",fahrenhite,celcius);
                                    fahrenhite=fahrenhite+25;
                                 }
             printf("\n\n\n\t\t\tProgram:  ANSI-C\n\n\t\t\tChapter-2\n\n\t\t\tchapter Title: Constants,Variables And Data Types\n\n\t\t\tPage No: 47\n\n\t\t\tCase Studies-2");
              getch();
       }
