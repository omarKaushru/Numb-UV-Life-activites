#include<conio.h>
#include<iostream>
using namespace std;
main(){
       double a;
       cout<<"Enter a age  :";
       cin>>a;
try{
    if(a>18){
        cout<<"Age is  :"<<a;
                 }
    else {
         throw a;
         }
    }
catch(double i){
      cout<<"Invalid age ";
      cout<<"Because age sholud be more than 18  :"<<i;
          }
      cout<<"\n\n\t\t**** Kaushru ****";
      getch();
      }
