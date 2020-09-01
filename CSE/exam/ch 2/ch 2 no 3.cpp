#include<iostream>
#include<conio.h>
using namespace std;
class Box{
      double h,l,w,volume;
      public:
             Box(double a, double b, double c){
                        h=a;
                        l=b;
                        w=c;
                        volume=h*l*w;
                   }
                   void vol(){
                        cout<<"volume of the box is :"<<volume<<"\n\n\n";
                        }
      };
      main(){
             Box m(1.2,4.5,3.1), n(1.23,1.50,2.3);
             m.vol();
             n.vol();
             getch();
             }
