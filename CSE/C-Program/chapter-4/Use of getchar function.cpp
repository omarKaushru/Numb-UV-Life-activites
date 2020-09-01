#include<stdio.h>
#include<conio.h>
main(){
        char answer;
        printf("Would you like to know my favourite person?");
        printf("\nType Y/y for yes or Type N/n for no");
        answer=getchar();
        if(answer=='Y'||answer=='y')
        printf("My Lovely MOTHER -->Shamsun_Nahar");
        else if(answer=='N'||answer=='n')
        printf("No Problem");
        else
        printf("Error");
        getch();
       }
