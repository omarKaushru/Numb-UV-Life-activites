///Accepted
#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<vector>
#include<map>
#include<set>
using namespace std;
string rev(string a)
{
    int i,j;
    string b="";
    for(i=0,j=a.length()-1;i<a.length();i++,j--)
    b+=a[j];
    return b;
}
string add(string e, string f)
{
    int i,j,x,y,sum,s;
    string c="";
    string a,b,d;
    int temp=0;
    a=rev(e);
    b=rev(f);
    for(i=0;i<a.length();i++)
    {
        if(i<b.length())
        {
            x=a[i]-'0';
            y=b[i]-'0';
            sum=x+y+temp;
            s=sum%10;
            c+=s+'0';
            temp=0;
            if(sum>9) temp=1;
            if(i==a.length()-1 && temp==1)
            c+='1';
        }
        else
        {
            x=a[i]-'0';
            sum=temp+x;
            s=sum%10;
            c+=s+'0';
            temp=0;
            if(sum>9)
            temp=1;
            if(i==a.length()-1 && temp==1)
            c+='1';
        }
    }
    d=rev(c);
    return d;
}

int main()
{
    int i,x;
    string a,b,e,f,c;
    map<int,string>nt;
    nt[0]="0";
    nt[1]="1";
    for(i=2;i<=5000;i++)
    nt[i]=add(nt[i-1],nt[i-2]);
    while(cin>>x)
    {
        cout<<"The Fibonacci number for "<<x<<" is "<<nt[x]<<endl;
    }
    return 0;
}
