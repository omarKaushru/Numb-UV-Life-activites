#include <stdio.h>

int main()
{
    int i,j, rows;

    printf("Enter the number of rows\n");
    scanf("%d", &rows);
    /* printing top semi circular shapes of heart */
    for(i = rows/2; i <= rows; i+=2)
    {
     /* Printing Spaces */
        for(j = 1; j < rows-i; j+=2)
        {
            printf(" ");
        }
        /* printing stars for left semi circle */
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        /* Printing Spaces */
        for(j = 1; j <= rows-i; j++)
        {
            printf(" ");
        }
        /* printing stars for right semi circle */
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        /* move to next row */
        printf("\n");
    }

    /* printing inverted start pyramid */
    for(i = rows; i >= 1; i--)
    {
        for(j = i; j < rows; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= (i*2)-1; j++)
        {
            printf("*");
        }
        /* move to next row */
        printf("\n");
    }

    return 0;
}
