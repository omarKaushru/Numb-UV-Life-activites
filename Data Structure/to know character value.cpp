/*
  Name: To know character or strings value.
  Copyright: Numb.
  Author: Md. Omar Kaushru
  Date: 08/7/14 3:06 am.
  Description: It's will find out the value in ASCCI...
*/

#include <string.h>
#include <stdio.h>
#include <conio.h>
int main()
{
char *p1;
char s[9999];
p1 = s;
printf("Enter a character or a string:");
do {
gets(s); /* read a string */
/* print the decimal equivalent of each
character */
while(*p1) printf(" %d", *p1++);
} while(strcmp(s, "done"));
getch();
}
