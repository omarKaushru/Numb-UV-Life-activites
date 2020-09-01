#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define max 1000000
char prime[max];

long conj()
{
     long i,j;
     for(i=0;i<=max;i++)
     prime[i]=1;

     for(i=2;i<sqrt(max);)
        {
        for(j=i*2;j<=max;j+=i)
              {
              prime[j]=0;
              }
        i++;
        for(;!prime[i];i++) ;
        }
}

int main()
{
    long int n,i,j,p,a,b;
    conj();
    while(scanf("%ld",&n)==1)
    {
    if(n==0)
    {
    break;
    p=0;
    }
    else
        {
            for(i=2;i<max;i++)
            {
            if(prime[i]==1 && prime[n-i]==1)
                           {
                           p++;
                           a=i;
                           b=n-i;
                           break;
                           }
           }
           if(p==0)
           printf("Goldbach's conjecture is wrong.\n");
           else
           printf("%ld = %ld + %ld\n",n,a,b);
        }
    }
}
