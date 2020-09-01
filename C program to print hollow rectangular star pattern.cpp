#include<stdio.h>

int main(){
    int rows, cols , i, j;

    printf("Enter rows and columns of rectangle\n");
    scanf("%d %d", &rows, &cols);

    /* Row iterator for loop */
    for(i = 0; i < rows; i++){
     /* Column iterator for loop */
        for(j = 0; j < cols; j++){
            /* Check if currely position is a boundary position */
            if(i==0 || i==rows-1 || j==0 || j==cols-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
