///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=1;
    string a;
    while(cin>>a)
    {
        if(a=="*")
        break;
        else if(a=="Hajj")
        cout<<"Case "<<i<<": "<<"Hajj-e-Akbar"<<endl;
        else if(a=="Umrah")
        cout<<"Case "<<i<<": "<<"Hajj-e-Asghar"<<endl;
        i++;
    }
}
