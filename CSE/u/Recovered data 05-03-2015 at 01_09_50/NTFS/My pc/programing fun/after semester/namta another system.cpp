#include <stdio.h>
#include <conio.h>
main()
{
int m, n;
int i;
printf("Enter the number  :");
scanf("%d",&n);
m = 0;
for(i = 1; i <= 10; i++) {
m = m + n;
printf("%d X %d = %d\n", n, i, m);
}
getch();
}
