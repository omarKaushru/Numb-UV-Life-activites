#include<stdio.h>
int main()
{
    long int n,rem,m;
    int binary[100],i=1,j,k=0;
    printf("Enter any decimal number: ");
    scanf("%ld",&n);
    m = n;
    while(m!=0)
    {
         binary[i++]= m % 2;
         m = m / 2;
    }
    printf("Equivalent binary value of decimal number %d: ",n);
    for(j = i -1 ;j> 0;j--)
    {
    printf("%d",binary[j]);
    if(binary[j]==1)
    k++;
    }
    printf("\nNumber of one: %d",k);
    return 0;
}
