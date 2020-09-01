#include <stdio.h>
#include <conio.h>
#include <string.h>
char *p = "hello world";
int main(void)
{
int t;
/* print the string forward and backwards */
printf(p);
for(t=strlen(p)-1; t>-1; t--)
printf("%c", p[t]);
getch();
}
