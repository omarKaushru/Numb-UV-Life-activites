#include <stdio.h>
#include <conio.h>
main()
{
    int i, sum,n;
    sum = 0;
    printf("\n Value of n: ");
    scanf("%d", &n);
    printf(" Your Series: ");
    for(i = 2; i <=n; i=i+2)
          {
               sum = sum + i;
               printf(" %d+", i);
          }
    printf("\n Series Summation: %d ", sum);
    
    getch();
}

