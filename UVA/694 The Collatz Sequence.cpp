///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A,L,i,j=1,a;
    while(cin>>A>>L && (A>=0 && L>=0))
    {
        a=A;
        for( i=1; ; i++)
        {
            if(a==1)
            break;
            if(a%2==0)
            a=a/2;
            else
            a=(a*3)+1;
            if(a>L)
            break;
        }
        cout<<"Case "<<j<<": A = "<<A<<", "<<"limit = "<<L<<", number of terms = "<<i<<endl;
        j++;
    }
}
