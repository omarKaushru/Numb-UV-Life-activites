/*
Name: Md. Omar Kaushru
*/
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long lag;
lag  xn,n;
int t;

long GCD(long pc, long ii)
{
    if(ii==0)
    return pc;
    return GCD(ii, pc%ii);
}

long calculatepublickey(long p1,long p2)
{
    long temp=(p1-1)*(p2-1);
    for(int i=3; i<=temp; i++)
    {
        if(GCD(temp,i)==1)
        {
            return i;
            //break;
        }
    }
}
int powmod( lag e )
{
	if( !e )
	return 1;
	lag half = powmod( e/2 );
	if( e%2 )
	return (xn*(half*half)%n)%n;
	return (half*half)%n;
}
int main()
{
    system("cls");
    long publicKey, primeNumber1, primeNumber2,m,piN,d,l,i,temp[1000];
    char plainText[1000], cipherText[1000], DecodedPlainText[1000];
    cout<<"Enter the plain text in upper case: \n";
    gets(plainText);
    cout<<"Enter the publicKey primeNumber1 and primeNumber2: ";
    cin>>primeNumber1>>primeNumber2;
    l=strlen(plainText);
    n=primeNumber1*primeNumber2;
    publicKey=calculatepublickey(primeNumber1,primeNumber2);

    for(i=0; i<l; i++)
    {
        m=plainText[i];
        xn=m%n;
        t=powmod(publicKey);
        cipherText[i]=t;
    }
    cipherText[i]='\0';
    cout<<"Emcrypted plaintext :\n";
    puts(cipherText);
    piN=(primeNumber1-1)*(primeNumber2-1);

    while(true)
    {

        if((piN+1)%publicKey==0)
        {
            d=(piN+1)/publicKey;
            if(GCD(piN,d)==1)///d should relativly prime with Pi
            break;
            //else
            //continue
        }
        else
        piN=piN*2;
    }
    for(i=0; i<l; i++)
    {
        m=cipherText[i];
        xn=m%n;
        t=powmod(publicKey);
        DecodedPlainText[i]=t;
    }

    DecodedPlainText[i]='\0';
    puts("\n");
    cout<<"Decoded plain text: ";
    puts(DecodedPlainText);
    return 0;
}


/* cin>>x>>y>>n;
		xn = x%n;
		cout<<powmod(y)<<endl;*/
