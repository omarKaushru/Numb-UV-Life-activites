#include <stdio.h>
int main()
{
    int number;
    scanf("%4d",&number);
    number=number%1000;
    printf("%d\n",number);
    number=number%100;
    printf("%d\n",number);
    number=number%10;
    printf("%d\n",number);
    return 0;
}
