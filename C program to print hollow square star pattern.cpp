#include<stdio.h>

int main(){
    int side, i, j;

    printf("Enter side of square\n");
    scanf("%d", &side);

    /* Row iterator for loop */
    for(i = 0; i < side; i++){
     /* Column iterator for loop */
        for(j = 0; j < side; j++){
            /* Check if currely position is a boundary position */
            if(i==0 || i==side-1 || j==0 || j==side-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
