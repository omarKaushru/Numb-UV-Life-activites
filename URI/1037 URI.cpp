#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    while(cin>>n)
    {
        if(n<0 || n>100)
        cout<<"Fora de intervalo\n";
        else if(n<=25.00)
        cout<<"Intervalo [0,25]\n";
        else if(n<=50.0)
        cout<<"Intervalo (25,50]\n";
        else if(n<=75.0)
        cout<<"Intervalo (50,75]\n";
        else if(n<=100.0)
        cout<<"Intervalo (75,100]\n";
    }
    return 0;
}
