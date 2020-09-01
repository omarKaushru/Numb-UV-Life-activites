#include<conio.h>
#include<iostream>
using namespace std;
class dist{
      double dis1,dis2;
public:
   void setdis(double d1,double d2){
        dis1=d1;
        dis2=d2;
        }
   void getdis(double &d1,double &d2){
        d1=dis1;
        d2=dis2;
        }
   virtual double trav_time()=0;
      };
class metric : public dist{
public:
   double trav_time(){
          double d1,d2;
          getdis(d1,d2);
          return d1+d2;
          }
      };
main(){
       dist *p;
       metric t;
       t.setdis(60,60);
       p=&t;
       cout<<"Speed  : "<<p->trav_time()<<" Kilometer per hour";
       getch();
       }
