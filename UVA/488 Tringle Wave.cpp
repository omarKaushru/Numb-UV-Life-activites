///Accepted
#include <iostream>
using namespace std;
int main()
{
    int a,f,i,j,k,t,l;
    while(cin>>t)
    {
        for(l=1; l<=t; l++)
        {
            cin>>a>>f;
        i=j=k=0;
        for(k=1; k<=f; k++)
        {

        for(i=1; i<=a; i++)
        {
            for(j=1; j<=i; j++)
            cout<<i;
            cout<<endl;
        }
        for(i=a-1; i>=1; i--)
        {
            for(j=1; j<=i; j++)
            cout<<i;
            cout<<endl;
        }
        if(l!=t || k!=f)
        cout<<endl;
        }
        }
    }
    return 0;
}
