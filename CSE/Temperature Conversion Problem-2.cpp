#include<stdio.h>
#include<conio.h>
main(){
typedef float REAL;
REAL fahrenhite,celcius;
fahrenhite=0;
printf("Fahrenhite \t....... Celcius\n\n");
while(fahrenhite<=250){
celcius=(fahrenhite-32.0)/1.8;
printf("%.1f     .......   %.2f\n",fahrenhite,celcius);
fahrenhite=fahrenhite+25;
}
getch();
}
