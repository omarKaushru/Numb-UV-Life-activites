#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    while(cin>>a>>b)
    {
        c=b-a;
        if(c < 0)
        c=24+(b-a);
        if (a==b)
        cout<<"O JOGO DUROU 24 HORA(S)\n";
        else
        cout<<"O JOGO DUROU "<<c<<" HORA(S)\n";
    }
    return 0;
}
