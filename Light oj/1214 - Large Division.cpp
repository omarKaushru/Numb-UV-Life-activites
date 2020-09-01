///not accepted
#include <iostream>
using namespace std;
int main()
{
    long long int a,b,t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b;
        if((a%b)==0)
        cout<<"Case "<<i<<": "<<"divisible"<<endl;
        else
        cout<<"Case "<<i<<": "<<"not divisible"<<endl;
    }
    return 0;
}
