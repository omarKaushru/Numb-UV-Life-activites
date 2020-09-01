#include<conio.h>
#include<iostream>
using namespace std;
main(){
       double a;
       cout<<"Enter a number  :";
       cin>>a;
try{
    if(a>=0){
        cout<<"Result is  :"<<a;
                 }
    else {
         throw a;
         }
    }
catch(double i){
      cout<<"Invalid number format ";
      cout<<"Because it is a negative number  :"<<i;
          }
      cout<<"\n\n\t\t**** Kaushru ****";
      getch();
      }
