#include<iostream>
#include<conio.h>
using namespace std;
class myclass{
      private:
              int x,y;
      public:
             myclass(){
                       x=0;y=0;
                       }
             myclass(int i,int j)
             {
                         x=i;y=j;
                         }
             void get_xy(int &i,int &j)
             {
                  i=x;j=y;
             }
             int operator=(myclass &ob1);
             };
             int myclass::operator=(myclass &o1){
                           x=o1.x;
                           y=o1.y;
                           return x;
                           return y;
                          }      
int main(){
           myclass o1(10,10),o2;
           o2=o1;
           int x,y;
           o2.get_xy(x,y);
           cout<<x<<"\n"<<y;
           getch();
           }
