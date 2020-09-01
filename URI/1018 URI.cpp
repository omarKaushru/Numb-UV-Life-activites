#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int input,temp, n_100,n_50,n_20,n_10,n_5,n_2;
    while(cin>>input)
    {
        printf("%ld\n",input);
        n_100=input/100;
        temp=input%100;
        printf("%ld nota(s) de R$ 100,00\n",n_100);
        n_50=temp/50;
        temp=temp%50;
        printf("%ld nota(s) de R$ 50,00\n",n_50);
        n_20=temp/20;
        temp=temp%20;
        printf("%ld nota(s) de R$ 20,00\n",n_20);
        n_10=temp/10;
        temp=temp%10;
        printf("%ld nota(s) de R$ 10,00\n",n_10);
        n_5=temp/5;
        temp=temp%5;
        printf("%ld nota(s) de R$ 5,00\n",n_5);
        n_2=temp/2;
        temp=temp%2;
        printf("%ld nota(s) de R$ 2,00\n",n_2);
        printf("%ld nota(s) de R$ 1,00\n",temp);
    }
    return 0;
}
