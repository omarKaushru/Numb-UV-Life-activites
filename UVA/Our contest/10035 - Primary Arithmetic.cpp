#include<stdio.h>
int main()
{
unsigned long int a,b,x,y;
int i,j,c,d,carry;
while(scanf("%lu%lu",&a,&b)==2)
{
c=0;
d=0;
if(a==0 && b==0) break;
for(i=0;i<9;i++)
    {
    x=a%10;
    y=b%10;
    if(x+y>=10)
        {
        d=d+1;
        do 
            {
            a=a/10;
            b=b/10;
            x=a%10;
            y=b%10;
            if(x+y==9)
            c=c+1;
            else if(x+y>9)
            d=d+1;
            }while(x+y>=9);
        }
    a=a/10;
    b=b/10;
    if(a==0 && b==0) break;
    }
carry=d+c;
if(carry==0)
printf("No carry operation.\n");
else if(carry==1)
printf("%d carry operation.\n",carry);
else
printf("%d carry operations.\n",carry);
}
return 0;
}
