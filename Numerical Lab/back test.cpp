#include <iostream>
using namespace std;
int main()
{
    int i,j,n,k,l,a[10] [10],x,y;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        x=i;
    for(j=1; j<=n && x<=n; j++)
    {
       a[i][j]=n-j;
       x++;
    }
    }
    cout<<"\n\n";
    y=n;
    for (i=1; i<=n; i++)
    {

    for(j=y; j>=1; j--)
    {
       cout<<a[i][j]<<" ";
    }
    y--;
    cout<<endl;
    }
    return 0;
}
///cout<<"del^"<<i<<"y"<<a[i][j]<<"  ";
