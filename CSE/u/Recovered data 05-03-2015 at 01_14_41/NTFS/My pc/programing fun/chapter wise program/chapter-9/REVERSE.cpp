#include<stdio.h>
#include<conio.h>
int reverse();
main(){
       printf("enter string");
       reverse();
       getch();
       }
int reverse(){
    char x;
    scanf("%c",&x);
    if(x!='\n')
    reverse();
    printf("%c",x);
}
