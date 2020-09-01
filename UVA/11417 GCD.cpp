#include <bits/stdc++.h>
using namespace std;

int gcd ( int a, int b )
{
    while ( b ) {
        a = a % b;
        swap ( a, b );
    }
    return a;
}

int main()
{
    int N,i,j,G;
    while(cin>>N)
    {
        if(N==0)
            break;
        G=0;
        for(i=1;i<N;i++)
        for(j=i+1;j<=N;j++)
        {
            G+=gcd(i,j);
        }
        cout<<G<<endl;
    }
    return 0;
}
