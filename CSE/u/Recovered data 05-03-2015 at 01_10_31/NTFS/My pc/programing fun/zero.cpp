#include<conio.h>
#include<iostream>
using namespace std;
main(){
       double a,b,c;
       cout<<"Enter first value  :";
       cin>>a;
       cout<<"Enter second value :";
       cin>>b;
try{
    if(b!=0){
        c=a/b;
        cout<<"\nResult is  :"<<c;
                 }
    else {
         throw b;
         }
    }
catch(double i){
      cout<<"\nAn exception occured, because can not divied by zero:"<<i;
          }
      cout<<"\n\n\t\t**** Kaushru ****";
      getch();
      }
