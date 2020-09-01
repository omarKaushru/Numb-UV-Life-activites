#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    float a[20][10],sum=0,a0,a1,b[3][3],del,dela0,dela1;
    int i,j,k,n;
    cin>>n;
    cout<<"Enter x  y   w:"<<endl;
    for(i=0; i<n; i++)
    cin>>a[i][0]>>a[i][1]>>a[i][2];
    for(j=0; j<n;j++)
    {
        a[j][3]=a[j][1]*a[j][2];
        a[j][4]=a[j][0]*a[j][0];
        a[j][5]=a[j][2]*a[j][0]*a[j][0];
        a[j][6]=a[j][2]*a[j][0];
        a[j][7]=a[j][2]*a[j][0]*a[j][1];
    }
    k=0;
    for(i=0; i<=7; i++)
    {
        sum=0;
        for(j=0; j<n; j++)
        {
            sum=sum+a[j][i];
        }
        a[n][k]=sum;
        k++;
    }
    cout<<"x    y    w    wy    x^2    wx^2    wx    wxy"<<endl;
    for(i=0; i<=n; i++)
    {
        if(i==n)
        cout<<"________________________________________________"<<endl;
        for(j=0; j<=7; j++)
        {
            cout<<a[i][j]<<"    ";
        }
        cout<<endl;
    }
    cout<<"\n________________________________________________"<<endl;
    b[0][0]=a[n][2],b[0][1]=a[n][6],b[0][2]=a[n][3];
    b[1][0]=a[n][6],b[1][1]=a[n][5],b[1][2]=a[n][7];
    del=(b[0][0]*b[1][1])-(b[0][1]*b[1][0]);
    dela0=(b[0][2]*b[1][1])-(b[1][2]*b[0][1]);
    dela1=(b[1][2]*b[0][0])-(b[0][2]*b[1][0]);
    a0=dela0/del;
    a1=dela1/del;
    if(a0<0)
    cout<<"y= "<<a1<<"x"<<a0;
    else
    cout<<"y= "<<a1<<"x +"<<a0;
    return 0;
}

