#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
char str[99];
int i=0;
printf("\nPlease enter a line:");
gets(str);
while(str[i]!='\0'){
i++;
}
printf("\Length =%d",i);
getch();
}
