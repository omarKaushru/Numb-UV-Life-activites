///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c=0;
    char s[15];
    while(gets(s))
    {
        if(strcmp(s,"#")==0)
        break;
        c++;
        if(strcmp(s,"HELLO")==0)
        cout<<"Case "<<c<<": "<<"ENGLISH"<<endl;
        else if(strcmp(s,"HOLA")==0)
        cout<<"Case "<<c<<": "<<"SPANISH"<<endl;
        else if(strcmp(s,"HALLO")==0)
        cout<<"Case "<<c<<": "<<"GERMAN"<<endl;
        else if(strcmp(s,"BONJOUR")==0)
        cout<<"Case "<<c<<": "<<"FRENCH"<<endl;
        else if(strcmp(s,"CIAO")==0)
        cout<<"Case "<<c<<": "<<"ITALIAN"<<endl;
        else if(strcmp(s,"ZDRAVSTVUJTE")==0)
        cout<<"Case "<<c<<": "<<"RUSSIAN"<<endl;
        else
        cout<<"Case "<<c<<": "<<"UNKNOWN"<<endl;
    }
    return 0;
}
