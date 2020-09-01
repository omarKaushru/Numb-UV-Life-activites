#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main(){
       char alphabet;
       printf("Enter an alphabet\n");
       alphabet=getchar();
       if(islower(alphabet))
       putchar(toupper(alphabet));
       else if(isdigit(alphabet))
       printf("error");
       else
       putchar(tolower(alphabet));
        printf("\n\n\n\t\t\tCourse:  ANSI-C\n\n\t\t\tChapter-4\n\n\t\t\tchapter Title: Managing Input And Output Operations\n\n\t\t\tPage No: 87\n\n\t\t\tProgram: 4.3");
                  printf("\n\n\n\t\t\t************");
       getch();
       }
