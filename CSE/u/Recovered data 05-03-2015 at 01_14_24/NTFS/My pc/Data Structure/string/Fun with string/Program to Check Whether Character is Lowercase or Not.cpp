#include<stdio.h>
#include<conio.h>
main() {
   char ch;
 
   printf("\nEnter The Character : ");
   scanf("%c", &ch);
 
   if (ch >= 'A' && ch <= 'Z') {
      printf("Character is uppercase Letters");
   } else if (ch >= 'a' && ch <= 'z') {
      printf("Character is Lowercase Letters");
   } else {
      printf("Non alphabet character");
   }
 
   getch();
}
