/* the following program prints the number 10 ten times */

#include <conio.h>
#include <stdio.h>
void f(void);
int main(void)
{
int i;
for(i=0; i<10; i++) f();
getch();
}
void f(void)
{
int j = 10;
printf("%d ", j);
j++; /* this line has no lasting effect */
}
