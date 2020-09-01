/* This program has a bug. */
#include <string.h>
#include <stdio.h>
#include <conio.h>
main()
{
char *p1;
char s[80];
p1 = s;
printf("Enter string as your wish   :");
do {
gets(s); /* read a string */
/* print the decimal equivalent of each
character */
while(*p1) printf(" %d", *p1++);
} while(strcmp(s, "done"));
getch();
}
