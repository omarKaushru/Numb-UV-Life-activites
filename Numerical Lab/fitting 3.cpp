#include <iostream>
using namespace std;
int main()
{
    float a[20][10],sum=0,a0,a1,del,dela0,dela1;
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
    del=(a[n][2]*a[n][5])-(a[n][6]*a[n][6]);
    dela0=(a[n][3]*a[n][5])-(a[n][7]*a[n][6]);
    dela1=(a[n][7]*a[n][2])-(a[n][3]*a[n][6]);
    a0=dela0/del;
    a1=dela1/del;
    cout<<"\nRequired equation for fitting straight line: ";
    if(a0<0)
    cout<<"y= "<<a1<<"x"<<a0;
    else
    cout<<"y= "<<a1<<"x +"<<a0;
    cout<<"\n\n";
    return 0;
}
