#include<stdio.h>
int main()
{
    long int decimalNumber,remainder,quotient;
    int binaryNumber[100],i=1,j,k=0;
    printf("Enter any decimal number: ");
    scanf("%ld",&decimalNumber);
    quotient = decimalNumber;
    while(quotient!=0)
    {
         binaryNumber[i++]= quotient % 2;
         quotient = quotient / 2;
    }
    printf("Equivalent binary value of decimal number %d: ",decimalNumber);
    for(j = i -1 ;j> 0;j--)
    {
    printf("%d",binaryNumber[j]);
    if(binaryNumber[j]==1)
    k++;
    }
    printf("\nNumber of one: %d",k);
    return 0;
}
