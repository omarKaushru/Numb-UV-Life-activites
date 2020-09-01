#include <stdio.h>
#include <conio.h>
int count; /* count is global */
void func1(void);
void func2(void);
int main(void)
{
count = 101;
func1();
getch();
}
void func1(void)
{
int temp;
temp = count;
func2();
printf("\nCount is %d", count); /* will print 100 */
}
void func2(void)
{
int count;
for(count=1; count<101; count++){
putchar('.');
printf(" * ");
}
}
