#include <bits/stdc++.h>
using namespace std;

long ModTheValue(long b, long p, long m)
{
    if(p==0)
    return 1;
    if(p%2==0)
    return (ModTheValue(b,p/2,m)*ModTheValue(b,p/2,m))%m;
    return (ModTheValue(b,p-1,m)*(b%m))%m;
}

int main()
{
    long publicKey, primeNumber1, primeNumber2,n,m,t,piN,d;
    char plainText[1000], cipherText[1000], DecodedPlainText[100];
    gets(plainText);
    cin>>publicKey>>primeNumber1>>primeNumber2;
    int i;
    n=primeNumber1*primeNumber2;
    for(i=0; plainText[i]!='\0'; i++)
    {
        m=plainText[i]-95;
        t=ModTheValue(m,publicKey,n);
        cipherText[i]=t;
    }
    cout<<" M "<<m<<" t "<<t<<" "<<endl;
    cipherText[i]='\0';
    puts(cipherText);
    piN=(primeNumber1-1)*(primeNumber2-1);
    while(true)
    {
        if((piN+1)%publicKey==0)
        {
            d=(piN+1)/publicKey;
        }
        else
        {
            piN=piN*2;
            if((piN+1)%publicKey==0)
            {
                d=(piN+1)/publicKey;
            }
        }
        if((piN+1)%publicKey==0)
        break;
    }
    cout<<"D "<<d<<"\n";
    for(i=0; cipherText[i]!='\0'; i++)
    {
        m=cipherText[i];
        t=ModTheValue(m,d,n);
        DecodedPlainText[i]=t+96-publicKey;
        cout<<"M "<<m<<endl;
    }
    cout<<" T "<<t<<"\n";
    DecodedPlainText[i]='\0';
    puts(DecodedPlainText);
}
