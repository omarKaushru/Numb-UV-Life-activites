#include<conio.h>
#include<iostream>
using namespace std;
class area{
      double dim1,dim2;
public:
   void setarea(double d1,double d2){
        dim1=d1;
        dim2=d2;
        }
   void getdim(double &d1,double &d2){
        d1=dim1;
        d2=dim2;
        }
   virtual double getarea(){
           cout<<"You must override this function\n";
           return 0.0;
           }
      };
class rectangle : public area{
public:
   double getarea(){
          double d1,d2;
          getdim(d1,d2);
          return d1*d2;
          }
      };
class triangle : public area{
public:
   double getarea(){
          double d1,d2;
          getdim(d1,d2);
          return 0.5*d1*d2;
          }
      };
main(){
       area *p;
       rectangle r;
       triangle t;
       r.setarea(3.3,4.5);
       t.setarea(4.7,5.8);
       p=&r;
       cout<<"Rectangle has area  :"<<p->getarea()<<"\n";
       p=&t;
       cout<<"Triangle has area   :"<<p->getarea()<<"\n";
       cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
