#include<iostream>
#include<conio.h>
using namespace std;
void min(int x,int y);
void min(double k,char *t,int d);
 main(){
    int a,b;
    double m;
    char t[50];
    int c;
    cout<<"Enter a=";
    cin>>a;
    cout<<"Enter b=";
    cin>>b;
    cout<<"Enter m=";
    cin>>m;
    cout<<"Enter t=";
    cin>>t;
    cout<<"Enter c=";
    cin>>c;
    min(a,b);
    min(m,t,c);
    getch();
}
void min(int x,int y){
     if(x<y)
     cout<<"Minimum integer number is="<<x<<"\n\n";
     else
     cout<<"Minimum integer number is="<<y<<"\n";
     } 
void min(double k,char *t,int d){
      cout<<"double number is="<<k<<"\n\n";
      cout<<"Character is="<<t<<"\n\n";
      cout<<"integer number is="<<d;
     } 
