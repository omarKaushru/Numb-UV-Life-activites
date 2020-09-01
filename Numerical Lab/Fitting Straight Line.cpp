#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    float a[20][10],sum=0;
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
    cout<<"x    y    w    wy    x^2    wx^2    wx    wxy"<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<=7; j++)
        {
            cout<<a[i][j]<<"    ";
        }
        cout<<endl;
    }
    cout<<"_______________________________________________"<<endl;
    for(i=0; i<=7; i++)
    {
        sum=0;
        for(j=0; j<n; j++)
        {
            sum=sum+a[j][i];
        }
        cout<<sum<<"    ";
    }
    cout<<"\n_______________________________________________"<<endl;
}

