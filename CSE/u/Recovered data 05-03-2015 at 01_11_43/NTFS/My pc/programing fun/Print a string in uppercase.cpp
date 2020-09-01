#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void print_upper(char *string);
int main(void)
{
char s[80];
printf("Enter a String :");
gets(s);
print_upper(s);
printf("\nString is now uppercase: %s", s);
getch();
}
/* Print a string in uppercase. */
void print_upper(char *string)
{
register int t;
for(t=0; string[t]; ++t) {
string[t] = toupper(string[t]);
//putchar(string[t]);
}
}
