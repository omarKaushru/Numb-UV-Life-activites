
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,x[5],t;
    while(cin>>a>>b>>c)
    {
        x[0]=a,x[1]=b,x[2]=c;
        for(int i=0; i<3; i++)
        {
            for(int j=i; j<3; j++)
            {
                if(x[i]<x[j])
                {
                    t=x[i];
                    x[i]=x[j];
                    x[j]=t;
                }
            }
        }
        //for(int i=0; i<3; i++)
     //   cout<<x[i]<<" ";
       // cout<<"\n";
        a=x[0],b=x[1],c=x[2];
        if(a>=(b+c))
        cout<<"NAO FORMA TRIANGULO\n";
        else if((a*a)==(b*b+c*c))
        cout<<"TRIANGULO RETANGULO\n";
        else if((a*a)>((b*b)+(c*c)))
        cout<<"TRIANGULO OBTUSANGULO\n";
        else if((a*a)<(b*b+c*c))
        cout<<"TRIANGULO ACUTANGULO\n";
        if(a==b && b==c)
        cout<<"TRIANGULO EQUILATERO\n";
        else if((a==b && a!=c) || (b==c && b!=a) || (c==a && a!=b))
        cout<<"TRIANGULO ISOSCELES\n";
    }
    return 0;
}
