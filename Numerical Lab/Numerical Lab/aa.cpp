#include <iostream>
using namespace std;
int main()
{
    int i,j,n,k,l,a[10] [10],x;
    cin>>n;
    for (i=0; i<n; i++)
    {
    for(j=i; j<=n; j++)
    {
       a[i][j]=j-i;
    }
    }
    for (i=1; i<=n; i++)
    {
        cout<<"del^"<<i<<"   ";
    }
    cout<<"\n\n";
    for (i=1; i<=n; i++)
    {
        x=i;
    for(j=1; j<=n && x<=n; j++)
    {
        cout<<"del^"<<j<<"y"<<a[j][x]<<" ";
        x++;
    }
    cout<<endl;
    }
    return 0;
}
