#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long int n,rem,m;
    int binary[100],i=1,j,k=0,t,x,y,c=0;
    cin>>t;
    for(x=1; x<=t; x++)
    {

    i=1,j,k=0;
    cin>>n;
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
    cout<<"Case "<<x<<": "<<y<<endl;
    }
    return 0;
}
