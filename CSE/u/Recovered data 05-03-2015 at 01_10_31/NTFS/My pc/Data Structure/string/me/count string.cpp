#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
char ch[80];
int i,c;
printf("Enter string:");
gets(ch);
for(i=0; ch[i]!='\0'; i++){}
printf("%d",i);
getch();
}
