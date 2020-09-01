/* Program to calculate nCr and nPr by reading values of n and r from user*/
#include <stdio.h>
#include <conio.h>
long int factorial (int x);

int main ()
{
    int n,r;
    long int ncr,npr;
    printf ("\n Enter value of n:");
    scanf ("%ld",&n);
    printf ("\n Enter value of r:");
    scanf ("%ld",&r);
    
    npr = factorial(n)/factorial(n-r);
    
    ncr = npr / factorial(r);
    
    printf ("\n NpR value is:%ld\n",npr);
    printf ("\n NcR value is:%ld\n",ncr);
    getch ();
    return 0;
}

/* Function to calculate factorial */
long int factorial (int x)
{
    int i,f=1;
    for (i=2 ; i<=x ; i++)
        f = f * i;
    return (f);
}
