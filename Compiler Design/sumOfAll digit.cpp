#include<stdio.h>
int main()
{
    int n,temp,remainder,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(1)
    {
        remainder=temp%10;
        sum=sum+remainder;
        temp=temp/10;
        if(temp==0 && sum>9)
        {
            temp=sum;
            sum=0;
        }
        else if(temp==0 && sum<=9)
        break;
    }
    printf("%d",sum);
    return 0;
}
