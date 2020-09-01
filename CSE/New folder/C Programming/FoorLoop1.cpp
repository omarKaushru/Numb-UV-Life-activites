#include <stdio.h>
#include <conio.h>
main()
{
    int i;
    int sum = 0;
    for(i = 0; i <=10; i++)
          {
               sum = sum + i;
               printf("%d  ", i);
          }
    printf("\n\n  Series Summation: %d ", sum);
    
    getch();
}


