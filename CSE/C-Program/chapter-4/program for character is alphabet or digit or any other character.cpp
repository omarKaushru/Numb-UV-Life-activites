#include<stdio.h>
#include<conio.h>//Header file for contain character function
#include<ctype.h>
main(){
       char character;;
       printf("Press any key\n");
       character=getchar();
       if(isalpha(character))
       printf("The character ia a letter");
       else if(isdigit(character))
       printf("The character is a digit");
       else if(ispunct(character))
       printf("The character is a punctuation mark");
       else if(isalnum(character)>0)
       printf("The character is not alphanumeric");
        printf("\n\n\n\t\t\tCourse:  ANSI-C\n\n\t\t\tChapter-4\n\n\t\t\tchapter Title: Managing Input And Output Operations\n\n\t\t\tPage No: 85\n\n\t\t\tProgram: 4.2");
                  printf("\n\n\n\t\t\t************");
       getch();
       }
