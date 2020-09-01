/***    This program shows that how a base class pointer can be used to access a derived class      ***/

#include<conio.h>
#include<iostream>
using namespace std;
class base{
      int x;
public:
  void setx(int i){
       x=i;
       }
  int getx(){
      return x;
      }
  };
class derived : public base{
      int y;
public:
  void sety(int i){
       y=i;
       }
  int gety(){
      return y;
      }
  };
main(){
       base *p;
       base b_ob;
       derived d_ob;
       p=&b_ob;
       p->setx(11);
       cout<<"Base object x:"<<p->getx()<<"\n";
       p=&d_ob;
       p->setx(99);
       d_ob.sety(88);
       cout<<"Derived object x :"<<p->getx()<<"\n";
       cout<<"Derived object y :"<<d_ob.gety()<<"\n";
       cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
