  /***   This program shows uses of a virtual program    ***/
#include<iostream>
#include<conio.h>
using namespace std;
class base{
public:
   virtual void func(){
           cout<<"using base verson of func()\n";
           }
     };
class derived1 : public base{
public:
   void func(){
        cout<<"Using derived1's verson of func()\n";
        }
      };
class derived2 : public base{
public:
    void func(){
        cout<<"Using derived2's verson of func()\n";
          }
      };
main(){
       base *p;
       base ob;
       derived1 d_ob1;
       derived2 d_ob2;
       p=&ob;
       p->func();
       p=&d_ob1;
       p->func();
       p=&d_ob2;
       p->func();
       cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
