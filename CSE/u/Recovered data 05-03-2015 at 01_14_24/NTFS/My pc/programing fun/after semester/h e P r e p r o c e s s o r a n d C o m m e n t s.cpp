#include <stdio.h>
#include <conio.h>
#define ABS(a) (a)<0 ? -(a) : (a)
int main(void)
{
printf("abs of -1 and 1: %d %d", ABS(-1), ABS(1));
getch();
}
