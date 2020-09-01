#include <iostream>
using namespace std;
int main()
{
    int a[10][10],i,j,n,k,x,y;
    cin>>n;
    for(i=1; i<=n; i++)
    cin>>a[i][1];
    y=n;
    for(j=1; j<n; j++)
    {
        x=1;
        for(i=1; i<=(y-x); i++)
        {
            a[i][j+1]= a[i][j];
        }
        y--;
    }
    y=n;
    cout<<"\n\n";
    for(i=0; i<n; i++)
    {
        if(i==0)
        cout<<"Y   ";
        else
        cout<<"del^"<<i<<"  ";
    }
    cout<<endl;
    for(j=1; j<=n; j++)
    {

        for(i=1; i<=y; i++)
        {
            cout<<"y"<<a[j][i]<<"     ";
        }
        y--;
        cout<<endl;
    }

}
