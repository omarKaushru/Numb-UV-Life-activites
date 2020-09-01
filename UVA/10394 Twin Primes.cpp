///Accepted
#include <bits/stdc++.h>
using namespace std;
#define M 18409900
bool prime[M];
int pc = 0,tw = 1;
long long int twins[100001];
void seieveOfEratosthenes()
{
    long long int i,j,k,l;
    prime[0] = prime[1] = true;
    k=2;
    for(i = 2 ; i <= M ; i++)
    {
        while(i<=M && prime[i])
        i++;
        if(i - k == 2)
            twins[tw++] = k;
        k=i;
        for(j = i*i ; j<=M ; j+=i)
        prime[j] = true;
    }
}

int main()
{
    int a;
    seieveOfEratosthenes();
    while(cin>>a)
    {
    printf("(%lld, %lld)\n",twins[a],twins[a]+2);
    }
    return 0;
}
