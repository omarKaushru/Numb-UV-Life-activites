#include <stdio.h>
int main()
{
    long int n,rem,m,l,x,y;
    int binary[100],i,j,k,t,c=0;
    scanf("%d",&t);
    for(x=1; x<=t; x++)
    {
    i=1,j,k=0;
    scanf("%ld",&n);
    m = n;
    while(m!=0)
    {
         binary[i++]= m % 2;
         m = m / 2;
    }
    for(j = i -1 ;j> 0;j--)
    {
    if(binary[j]==1)
    k++;
    }
    for( ; ;)
    {
        if(c==k)
        break;
        i=1,j,c=0;
        n=n+1;
        m=n;
        y=n;
        while(m!=0)
    {
         binary[i++]= m % 2;
         m = m / 2;
    }
    for(j = i -1 ;j> 0;j--)
    {
    if(binary[j]==1)
    c++;
    }
    }
    printf("Case %d: %ld\n",x,y);
    }
    return 0;
}
