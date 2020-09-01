#include<stdio.h>
void TowersOfHanoi(int n, char x, char y, char z);
int main()
{
    int a;
    printf("Enter the number of Disk:");
    scanf("%d",&a);
    TowersOfHanoi(a, 'A', 'B', 'C');
    return 0;
}
void TowersOfHanoi(int n, char x, char y, char z)
{
    if(n>=1)
    {
        TowersOfHanoi(n-1, x, z, y);
        printf("\nMove top disk from tower %c to top of tower %c",x,y);
        TowersOfHanoi(n-1, y, x, z);
        }
}
