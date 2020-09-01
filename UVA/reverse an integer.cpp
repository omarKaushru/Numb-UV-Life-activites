#include<stdio.h>
#include<conio.h>
int main()
{
    int reverse = 0;
    int r,n;
    printf("Enter the number to reverse");
    scanf("%d",&n);
    while(n>0)
    {
        r = n % 10;
        n = n / 10;
        reverse = (reverse *10) + r;
        }
    printf("The reversed number is :%d",reverse);
    return 0;
}
