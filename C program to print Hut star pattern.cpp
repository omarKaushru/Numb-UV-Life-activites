#include<stdio.h>

int main()
{
    int i, j, space, rows=8, star=0;

    /* Printing upper triangle */
    for(i = 1; i <= rows; i++)
    {
     if(i <= 5)
     {
        /* Printing upper triangle */
            for(space = 1; space <= 5-i; space++)
            {
               printf(" ");
            }
            /* Printing stars */
            while(star != (2*i - 1))
            {
                printf("*");
                star++;;
            }
            star=0;
            /* move to next row */
            printf("\n");
       }
       else
       {
        /* Printing bottom walls of huts */
            for(j = 0; j < 9; j++)
            {
             if((int)(j/3) == 1)
                 printf(" ");
             else
                 printf("*");
     }
  printf("\n");
       }
    }

    return 0;
}
