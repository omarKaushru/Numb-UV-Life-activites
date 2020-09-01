  /***   This program shows uses of a virtual program    ***/
#include<iostream>
#include<conio.h>
using namespace std;
class base{
public:
   int i;
   base(int x){
            i=x;
            }
   virtual void func(){
           cout<<"using base verson of func()  :"<<i<<"\n";
           }
     };
class derived1 : public base{
public:
   derived1(int x):base(x){}
   void func(){
        cout<<"Using derived1's verson of func()  :"<<i*i<<"\n";
        }
      };
class derived2 : public base{
public:
    derived2(int x):base(x){}
    void func(){
        cout<<"Using derived2's verson of func()  :"<<i*i<<"\n";
          }
      };
main(){
       base *p;
       base ob(10);
       derived1 d_ob1(11);
       derived2 d_ob2(12);
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
