#include<iostream>
#include<conio.h>
using namespace std;
class coord{
      int x,y;
public:
      coord(){
          x=0;
          y=0;
          }
      coord(int i,int j){
                  x=i;
                  y=j;
                  }
      void get_xy(int &i,int &j){
                         i=x;
                         j=y;
                         }
      coord operator-(coord ob2){
                      coord temp;
                      temp.x=x-ob2.x;
                      temp.y=y-ob2.y;
                      return temp;
                      }
                      coord operator-(){
                                      x=-x;
                                      y=-y;
                                      return *this;
                                      }
      };
      main(){
      coord o1(10,13),o2(5,3);
      int x,y;
      o1=o1-o2;
      o1.get_xy(x,y);
      cout<<"(o1-o2)x:"<<x<<",y:"<<y<<"\n";
      o1= -o1;
      o1.get_xy(x,y);
      cout<<"(-o1)x:"<<x<<",y:"<<y<<"\n";
      cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
      cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
      getch();
      }
                                                          
