#include<conio.h>
#include<iostream>
#include<math.h>
using namespace std;
main()
{
double a,b,c,d,e,f,x,y,z;
cout<<"Enter a :";
cin>>a;
cout<<"Enter power of a :";
cin>>c;
cout<<"Enter b :";
cin>>b;
cout<<"Enter power of b :";
cin>>d;
x=(a*b);
y=(c+d);
z=pow(10,y);
f=x*z;
cout<<f;
getch();
}
