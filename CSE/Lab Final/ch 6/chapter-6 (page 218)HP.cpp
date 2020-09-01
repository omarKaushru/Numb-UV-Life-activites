#include<iostream>
#include<conio.h>
using namespace std;
class coord{
      int x,y;
      public:
      coord(){
                     x=0;y=0;
                     }
      coord(int i,int j){
                               x=i;
                               y=j;
                               }
      void get_xy(int &i,int &j){
                                    i=x;
                                    j=y;
                                    }
      friend coord operator+(coord ob1,int i);
      friend coord operator+(int i,coord ob1);
                                    };
                                    coord operator+(coord ob1,int i){
                                          coord temp;
                                          temp.x=ob1.x+i;
                                          temp.y=ob1.y+i;
                                          return temp;
                                          }
                                          coord operator+(int i,coord ob1){
                                                coord temp;
                                                temp.x=ob1.x+i;
                                                temp.y=ob1.y+i;
                                                return temp;
                                                }
                                                       main(){
                                                          coord o1(10,13);
                                                          int x,y;
                                                          o1=o1+10;
                                                          o1.get_xy(x,y);
                                                          cout<<"(o1+10)x:"<<x<<",y:"<<y<<"\n";
                                                          o1=99+o1;
                                                          o1.get_xy(x,y);
                                                          cout<<"(99+o1)x:"<<x<<",y:"<<y<<"\n";
                                                          cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
                                                          cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
                                                          getch();
                                                          }
                                                          
