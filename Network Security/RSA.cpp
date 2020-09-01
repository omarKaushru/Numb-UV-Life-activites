#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int p,i,q,e,n,tt,t;
    int m;
    char s[1000],c[1000];
    //while(gets(s))
    //{
        gets(s);
        cout<<"Enter the public key & value of p, q: ";
        cin>>e>>p>>q;
        n=p*q;
        for( i=0; s[i]!='\0'; i++)
        {
            m=s[i];
            //n=p*q;
            tt=pow(m,e);
            t=tt%n;
            c[i]=t;
            cout<<t<<" ";
        }
        cout<<endl;
        c[i]='\0';
        puts(c);

    //}
    return 0;
}
