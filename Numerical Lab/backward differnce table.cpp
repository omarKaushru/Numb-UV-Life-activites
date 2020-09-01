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
    for (i=0; i<n; i++)
    {
        cout<<"del^"<<i<<"    ";
    }
    cout<<"\n\n";
    y=n;
    for (i=1; i<=n; i++)
    {
        k=0;
    for(j=y; j>=1; j--)
    {

       cout<<"del^"<<k<<"y"<<a[i][j]<<"  ";
       k++;
    }
    y--;
    cout<<endl;
    }
    return 0;
}
