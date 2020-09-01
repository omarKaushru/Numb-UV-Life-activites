#include <iostream>
#include <cstdio>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=1; i<=n; i++)
    {
       f=f*i;
    }
    return f;
}

float pp(float p,int n)
{
    float s=p;
    for(int i=2; i<=n; i++)
    {
        s=s*(p-(i-1));
    }
    return s;
}

int main()
{
    int i,j,n,k;
    float a[10][10],sum,p,q,h,x,x0,y;
    cin>>n;
    cout<<"Enter xi"<<endl;
    for(i=0; i<=n; i++)
    cin>>a[i][0];
    cout<<"Enter yi"<<endl;
    for(i=0; i<=n; i++)
    cin>>a[i][1];
    y=n-1;
    for(j=2; j<=(n+1); j++)
    {
        for(i=0; i<=y; i++)
        {
            a[i][j]=a[i+1][j-1]-a[i][j-1];
        }
        y--;
    }
    y=n+1;
    cout<<endl;
    cout<<"x         y     ";
    for(i=1; i<=n; i++)
    cout<<"d^"<<i<<"   ";
    cout<<"\n\n";
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=y; j++)
        {
            printf("%.4f  ",a[i][j]);
        }
        y--;
        cout<<endl;
    }
    cout<<"\nEnter x of y(x):";
    cin>>x;
    i=j=0;
    x0=a[i][j];
    h=a[i+1][j]-x0;
    p=(x-x0)/h;
    sum=a[i][j+1]+p*a[i][j+2];
    if(n>2)
    {
        cout<<"\n";
        for(i=2; i<=n; i++)
        {

            sum=sum+((pp(p,i)*a[0][i+1])/fact(i));
        }
    }
    cout<<"\n"<<"y("<<x<<") is: "<<sum<<endl;
    return 0;
}
