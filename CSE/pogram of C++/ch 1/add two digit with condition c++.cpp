#include<iostream.h>
#include<conio.h>
using namespace std;
main(){
       int a,b,c,m,n;
       float l;
       cout<<"a=";
       cin>>a;
       cout<<"b=";
       cin>>b;
       c=a+b;
       if(a>b){
       m=a-b;
       cout<<"\nm is="<<m;
       }
       else
       cout<<"a is less than b";
       n=a*b;
       l=a/b;
       cout<<"\nC is="<<c;
       cout<<"\nn is="<<n;
       cout<<"\nl is="<<l;
       getch();
       }
