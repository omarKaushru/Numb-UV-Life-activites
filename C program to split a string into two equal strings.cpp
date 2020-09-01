#include<stdio.h>
#include<string.h>

int main()
{

    char inputString[100], leftHalf[100], rightHalf[100];
    int length, mid, i, k;

    /* Read input string from user using gets */
    printf("Enter a string\n");
    gets(inputString);
    /* Find length of string using strlen function */
    length = strlen(inputString);

    mid = length/2;
    /* Copy left half of inputString to leftHalf */
    for(i = 0; i < mid; i++)
    {
        leftHalf[i]= inputString[i];
    }
    leftHalf[i] = '\0';

    /* Copy right half of inputString to rightHalf  */
    for(i = mid, k = 0; i <= length; i++, k++)
    {
        rightHalf[k]= inputString[i];
    }

    /* Printing left and right half of string */
    printf("Left half : %s\n",leftHalf);
    printf("Right half : %s\n",rightHalf);

    return 0;
}
