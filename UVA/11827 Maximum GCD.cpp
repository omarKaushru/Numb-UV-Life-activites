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
    int i,j,n;
    cin>>n;
    while(n)
    {
        for
        n--;
    }
    return 0;
}

/*
Recursive Function
int gcd ( int a, int b ) {
    if ( b == 0 ) return a;
    return gcd ( b, a % b );
}
*/
