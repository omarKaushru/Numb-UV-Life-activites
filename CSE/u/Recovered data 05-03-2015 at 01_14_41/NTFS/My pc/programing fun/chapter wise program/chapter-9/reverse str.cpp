#include<stdio.h>
#include<conio.h>
int reverse();
main(){
       printf("Enter string=");
       reverse();
       getch();
       }
       int reverse()
       {
       char x;
       scanf("%c",&x);
       if(x!='\o')
       reverse();
        printf("%c",x);
        }
