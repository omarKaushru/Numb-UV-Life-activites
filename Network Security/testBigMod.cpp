#include<iostream>
#include<stdio.h>
using namespace std;
int exponential(int a,int b,int n);
int binary(int B);
int counter(int bin);
int main()
{
     int p,q,M,C,e,n,x;
    cin>>M>>e>>n;
    x=exponential(M,e,n);
    cout<<x;
    return 0;
}

int exponential(int a,int b,int n)
{
    long int Binary,i,remainder[50],count;
    Binary=binary(b);//Calculating binary
    //cout<<b<<"converted to binary:"<<Binary<<endl<<endl;
    count=counter(Binary);//Calculating number of digits in the binary number
    //cout<<"number of digits of binary number(count from 0):"<<count<<endl<<endl;

    /*parsing the binary number*/
    int x=-1;
    for(i=0;Binary>0;i++)
	{
		remainder[i]=Binary%10;
		Binary=Binary/10;
		x++;
	}
	int c=0,d=1;
	for(i=count;i>=0;i--)
	{
	    c=2*c;
	    d=(d*d)%n;
	    if(remainder[i]==1)
	    {
	        c++;
	        d=(d*a)%n;
	    }
	}
	return d;
}
                    /*calculating binary*/
int binary(int B)
{
    int mod,sum=0,i;
    for(i=1;B>0;i=i*10)
    {
        mod=B%2;
        sum=sum+(i*mod);
        B=B/2;
    }
    return sum;
}
        /*Calculating number of digits of binary number*/
int counter(int bin)
{
    int x;
    for(x=0;bin>0;x++)
    {
        bin=bin/10;
    }
    x--;
    return(x);
}
