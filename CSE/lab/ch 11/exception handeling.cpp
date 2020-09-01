#include<conio.h>
#include<iostream>
using namespace std;
main(){
       int a,b,c;
       float d;
       cout<<"Enter first value  :";
       cin>>a;
       cout<<"Enter second value :";
       cin>>b;
       cout<<"Enter third value  :";
       cin>>c;
try{
    if((a-b)!=0){
        d=(c/(a-b));
        cout<<"Result is  :"<<d;
                 }
    else {
         throw(a-b);
         }
    }
catch(int i){
      cout<<"An exception occured";
      cout<<"Your answer is Infinity because (a-b) is :"<<i;
          }
      cout<<"\n\n\t\t**** Kaushru ****";
      getch();
      }
