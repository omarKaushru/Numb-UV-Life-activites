#include<conio.h>
#include<iostream>
using namespace std;
template <class t>
t large(t n1, t n2){
          return (n1>n2)?n1:n2;
          }
main(){
       int i1,i2;
       float f1,f2;
       char c1,c2;
       cout<<"Enter first integer  :";
       cin>>i1;
       cout<<"Enter second integer  :";
       cin>>i2;
       cout<<"Enter first float number  :";
       cin>>f1;
       cout<<"Enter second float number :";
       cin>>f2;
       cout<<"Enter first character   :";
       cin>>c1;
       cout<<"Enter second character  :";
       cin>>c2;
       cout<<"Larger of(i1,i2)  is  :"<<large(i1,i2);
       cout<<"\nLarger of(f1,f2)  is  :"<<large(f1,f2);
       cout<<"\nLarger of(c1,c2)  is  :"<<large(c1,c2);
       getch();
       }
