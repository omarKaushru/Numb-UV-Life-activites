#include<stdio.h>
#include<conio.h>
 main(){
   int r[10], num, i, Rs = 0;
 
   printf("Enter the number of Resistances : ");
   scanf("%d", &num);
 
   printf("\nEnter Value of Each Resistance : n");
   for (i = 0; i < num; i++) {
      printf("\n R%d : ", i + 1);
      scanf("%d", &r[i]);
   }
 
   for (i = 0; i < num; i++) {
      Rs = Rs + r[i];
   }
 
   printf("\nEquivalent Series Resistance : %d Kohm", Rs);
   getch();
}
