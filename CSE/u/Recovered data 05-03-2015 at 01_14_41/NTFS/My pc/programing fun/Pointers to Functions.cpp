#include <stdio.h>
#include <conio.h>
#include <string.h>
void check(char *a, char *b,
int (*cmp)(const char *, const char *));
main()
{
char s1[80], s2[80];
int (*p)(const char *, const char *);
p = strcmp;
printf("Eter a string :");
gets(s1);
printf("Eter another string :");
gets(s2);
check(s1, s2, p);
getch();
}
void check(char *a, char *b,
int (*cmp)(const char *, const char *))
{
printf("Testing for equality.\n");
if(!(*cmp)(a, b))
printf("Equal");
else printf("Not Equal");
}
