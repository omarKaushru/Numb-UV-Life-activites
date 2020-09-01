///Accepted

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,l;
    char n[10001];
    cin>>t;
    int i=1;
    while(i<=t)
    {
        gets(n);
        l=strlen(n);
        if(l==0)
        continue;
        if((n[0]=='1' || n[0]=='4' || (n[0]=='7' && n[1]=='8')) && l<=2)
        cout<<"+"<<endl;
        else if(n[l-1]=='5' && n[l-2]=='3')
        cout<<"-"<<endl;
        else if(n[0]=='9' && n[l-1]=='4')
        cout<<"*"<<endl;
        else
        cout<<"?"<<endl;
        i++;
    }
    return 0;
}
