///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==0 || b==0)
        break;
        if(a>0 && b>0)
        cout<<"primeiro\n";
        else if(a>0 && b<0)
        cout<<"quarto\n";
        else if(a<0 && b<0)
        cout<<"terceiro\n";
        else if(a<0 && b>0)
        cout<<"segundo\n";
    }
}
