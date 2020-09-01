#include<iostream>
#include<conio.h>
using namespace std;
class myclass{
      int x,y;
      public:
      myclass(){
                x=0;y=0;
                }
      myclass(int i,int j)
      {
       x=i;y=j;
       }
      myclass get_xy(int &i,int &j){
              i=x;j=y;
              }
      friend myclass operator+(myclass o1,myclass o2);
      };
      myclass operator+(myclass o1,myclass o2){
              myclass temp;
              temp.x=o1.x+o2.x;
              temp.y=o1.y+o2.y;
              return temp;
              }
      int main(){
          myclass o1(2,3),o2(4,5),Add;
          int x,y;
          Add=o1+o2;
          Add.get_xy(x,y);
          cout<<"Add result of x is:"<<x<<"\n"<<"Add result of y is:"<<y;
          getch();
          }
