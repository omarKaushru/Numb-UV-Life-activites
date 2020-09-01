///not submitted
#include <iostream>
using namespace std;
int fact(int f)
{
    int i,j,factorial=1;
    if(f==0 || f==1)
    return factorial;
    else
    {
        for(i=1; i<=f; i++)
        {
            factorial=factorial*i;
        }
        return factorial;
    }
}
int main()
{
    int t,n,k,i,res;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        res=0;
        cin>>n>>k;
        res=fact(n)/(fact(k)*fact(n-k));
        cout<<"Case "<<i<<": "<<res<<endl;
    }
    return 0;
}
