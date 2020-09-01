#include<stdio.h>
#include<conio.h>
#define F_LOW 0
#define F_MAX 250
#define STEP 25
main(){
       typedef float REAL;
        REAL fahrenhite,celcius;
         fahrenhite=F_LOW;
          printf("Fahrenhite ....... Celcius\n\n");
           while(fahrenhite<=F_MAX){
                                    celcius=(fahrenhite-32.0)/1.8;
                                    printf("%5.1f      ....... %7.2f\n",fahrenhite,celcius);
                                    fahrenhite=fahrenhite+STEP;
                                    }
                                     printf("\n\n\n\t\t\tProgram:  ANSI-C\n\n\t\t\tChapter-2\n\n\t\t\tchapter Title: Constants,Variables And Data Types\n\n\t\t\tPage No: 47\n\n\t\t\tCase Studies-2");
              getch();
       }
