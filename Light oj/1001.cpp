#include<iostream>
using namespace std;
int main()
{
    int t,n,i,x,y;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        x=n/2;
        y=n-x;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
