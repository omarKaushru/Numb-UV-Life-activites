#include<stdio.h>
#include<conio.h>
main()
{
      char answer;
      printf("Would you like to know my address?\n\n");
      printf("Type y for YES and N for NO: ");
      answer=getchar(); /*.......Reading a character.......*/
      if(answer=='Y' || answer=='y')
      printf("\n\nName          : Md. Ahsanul Hasan\n\nFather's name : Md. Moktal Hossain\n\nMother's Name : Yasmin Akter\n\nAddress       : Vill. : Chandpur(Borobari)  P.O : Comilla(3500)\n                Dist. : Comilla, Bangladesh\n\nPhone No.     : 01677080975");
      else
      printf("\n\nYou are good for nothing\n");
      getch();
      }
