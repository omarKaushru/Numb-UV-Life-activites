#include <stdio.h>
#include <conio.h>
#define SLICES 8
#define ADD(x) ( (x) / SLICES )
main()
{
int a = 0, b = 10, c = 6;
a = ADD(b + c);
printf("%d\n", a);
getch();
}
