#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int i,j,n,k,x,y;
    float a[10][10];
    cin>>n;
    cout<<"Enter xi:"<<endl;
    for(i=0; i<n; i++)
    cin>>a[i][0];
    cout<<"Enter yi:"<<endl;
    for(i=0; i<n; i++)
    cin>>a[i][1];
    y=n-1;
    for(j=2; j<=n; j++)
    {
        for(i=0; i<y; i++)
        {
            a[i][j]=a[i+1][j-1]-a[i][j-1];
        }
        y--;
    }
    y=n+1;
    cout<<"\nThe difference table is:\n\n";
    cout<<"x         y     ";
    for(i=1; i<n; i++)
    cout<<"d^"<<i<<"   ";
    cout<<"\n\n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("%.2f  ",a[i][j]);
        }
        y--;
        cout<<endl;
    }

    return 0;
}
