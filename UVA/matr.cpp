#include<iostream>
using namespace std;
int main()
{
    int a[10] [10],i,j,n;
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
