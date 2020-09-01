#include<iostream>
#include<conio.h>
using namespace std;
class myclass{
      int x;
      public:
      myclass()
      {
      x=0;
      }
      myclass(int i)
      {
      x=i;
      }
      myclass get_x(int &i)
      {
      i=x;
      }
      friend myclass operator--(myclass &o);
      };
      myclass operator--(myclass &o){
              o.x=o.x-1;
              return o.x;
              }
              
      int main(){
          myclass o(5);
          int x;
          --o;
          o.get_x(x);
          cout<<x;
          getch();
          }
