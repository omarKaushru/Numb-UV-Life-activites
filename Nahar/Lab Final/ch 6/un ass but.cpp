#include<conio.h>
#include<iostream>
using namespace std;
class coord{
      int x,y;
public:
       coord(){
            x=0;
            y=0;
            }
       coord(int i, int j){
                       x=i;
                       y=j;
                       }
       void get_xy(int &i, int&j){
                  x=i;
                  y=j;
                  }
       friend coord operator--(coord &ob);
       friend coord operator--(coord &ob, int notused);
       friend coord operator++(coord &ob);
       friend coord operator++(coord &ob, int notused);
      };
       coord operator--(coord &ob){
                  ob.x=ob.x-1;
                  ob.y=ob.y-1;
                   return ob;
                   }
       coord operator--(int n, coord &ob){
                   ob.x=1-ob.x;
                   ob.x=1-ob.y;
                   return ob;
                   }
       coord operator++(coord &ob){
                   ob.x=ob.x+1;
                   ob.y=ob.y+1;
                   return ob;
                   }
       coord operator++(coord &ob, int n){
                   ob.x=1+ob.x;
                   ob.y=1+ob.y;
                   return ob;
                   }
      main(){
             coord o1(0,0);
             int x,y;
             --o1;
             o1.get_xy(x,y);
             cout<<"(--o1)\nx  :"<<x<<"\ny  :"<<y<<"\n";
             o1--;
             o1.get_xy(x,y);
             cout<<"(o1--)\nx  :"<<x<<"\ny  :"<<y<<"\n";
             ++o1;
             o1.get_xy(x,y);
             cout<<"(++o1)\nx  :"<<x<<"\ny  :"<<y<<"\n";
             o1++;
             o1.get_xy(x,y);
             cout<<"(o1++)\nx  :"<<x<<"\ny  :"<<y<<"\n";
             getch();
             }
