#include<conio.h>
#include<iostream>
using namespace std;
template <class t>
t large(t n1, t n2, t n3){
          if (n1>n2||n1>n3)
          return n1;
          else if(n2>n1||n2>n3)
          return n2;
          else
          return n3;
          }
main(){
       int i1,i2,i3;
       float f1,f2,f3;
       char c1,c2,c3;
       cout<<"Enter first integer  :";
       cin>>i1;
       cout<<"Enter second integer  :";
       cin>>i2;
       cout<<"Enter third integer  :";
       cin>>i3;
       cout<<"Enter first float number  :";
       cin>>f1;
       cout<<"Enter second float number :";
       cin>>f2;
       cout<<"Enter third float number  :";
       cin>>f3;
       cout<<"Enter first character   :";
       cin>>c1;
       cout<<"Enter second character  :";
       cin>>c2;
       cout<<"Enter third character  :";
       cin>>c3;
       cout<<"Larger of(i1,i2,i3)  is  :"<<large(i1,i2,i3);
       cout<<"\nLarger of(f1,f2,f3)  is  :"<<large(f1,f2,f1);
       cout<<"\nLarger of(c1,c2,f3)  is  :"<<large(c1,c2,c3);
       cout<<"\n\n\t\t**** Kaushru ****";
       getch();
       }
