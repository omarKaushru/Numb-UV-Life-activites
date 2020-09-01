#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
int c,d,l;
char s[99];
printf("Enter a wrod then press Enter\n");
gets(s);
l=strlen(s);
printf("\n");
printf("..................\n");
for(c=0; c<=l; c++)
{
d=c+1;
printf("-> %-12.*s}\n",d,s);
}
printf("..................");
getch();
}
