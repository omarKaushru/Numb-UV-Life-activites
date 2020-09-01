#include <iostream>
using namespace std;
int main()
{
    int i,j,n,k,l,a[10] [10];
    cin>>n;
    for (i=1; i<=n; i++)
    {
    for(j=i; j<=n; j++)
    {
       a[i][j]=j-i;
       // cout<<"del^"<<i<<"y"<<(j-i)<<" ";
    }
    }
    for (i=1; i<=n; i++)
    {
    for(j=i; j<=n; j++)
    {
        cout<<"del^"<<i<<"y"<<a[i][j]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
