#include<iostream>
#include<conio.h>
using namespace std;
void max(int x,int y);
void max(double k,double s);
 main(){
    int a,b;
    double m,n;
    cout<<"Enter a=";
    cin>>a;
    cout<<"Enter b=";
    cin>>b;
    cout<<"Enter m=";
    cin>>m;
    cout<<"Enter n=";
    cin>>n;
    max(a,b);
    max(m,n);
    getch();
}
void max(int x,int y){
     if(x>y)
     cout<<"Maximum integer number is="<<x<<"\n";
     else
     cout<<"Maximum integer number is="<<y<<"\n";
     } 
void max(double k,double s){
      if(k>s)
      cout<<"Maximum double number is="<<k<<"\n";
     else
     cout<<"Maximum double number is="<<s;
     } 
