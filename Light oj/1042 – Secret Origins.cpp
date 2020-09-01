#include <iostream>
#include <cmath>
using namespace std;
int main()
{
     unsigned long int i, binary, rem, n,c,k,t,m,j,l,x,y;
    cin>>t;
    for(j=1; j<=t; j++)
    {
    cin>>n;
    m=n;
    i=1,binary=0;
     while (n!=0)
    {
        rem=n%2;
        n=n/2;
        binary=binary+rem*i;
        i=i*10;
    }
    //cout<<"Binary :"<<binary<<endl;
    c=rem=0;
    while (binary!=0)
    {
        rem=binary%10;
        binary=binary/10;
        if(rem==1)
        c++;
    }
   // cout<<"Total one: "<<c;
    l=k=0;
    for( ; ;)
    {
       if (l==c)
       break;
        m=m+1;
        x=m;
        y=m;
        i=1,binary=0;
     while (x!=0)
    {

        rem=x%2;
        x=x/2;
        binary=binary+rem*i;
        i=i*10;
    }
    //cout<<"\nBinary :"<<binary<<endl;
    l=k=rem=0;
    while (binary!=0)
    {
        rem=binary%10;
        binary=binary/10;
        if(rem==1)
        k++;
    }
    l=k;
    //cout<<"\nkkkk:"<<k;
    }
    cout<<"Case "<<j<<" : "<<y<<endl;
    }
    return 0;
}
