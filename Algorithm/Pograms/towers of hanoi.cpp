#include <stdio.h>
void towers(int n, char beg, char aux, char end);
int main()
{
    int num;
    printf("Enter the number of disks :");
    scanf("%d", &num);
    towers(num, 'A', 'B', 'C');
    return 0;
}
void towers(int n, char beg, char aux, char end)
{
    if(n>=1)
    {
    towers(n - 1, beg, end, aux);
    printf("\nMove disk %d from tower %c to tower %c", n, beg, end);
    towers(n - 1, aux, beg, end);
    }
}
