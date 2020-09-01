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
             int operator==(myclass ob2);
             int operator &&(myclass ob2);
             };
             int myclass::operator==(myclass ob2){
                          return x==ob2.x && y==ob2.y;
                          }
             int myclass::operator &&(myclass ob2){
                          return (x && ob2.x) && (y && ob2.y);
                          }
       main(){
           myclass o1(10,10),o2(5,3),o3(10,10),o4(0,0);
           if(o1==o2)
           cout<<"o1 and o2 are same \n";
           else
           cout<<"\n o1 and o2 are not same";
           if(o1==o3)
           cout<<"\n o1 and o3 are same";
           else
           cout<<"\n o1 and o3 are not same";
           if(o1&&o2)
           cout<<"\n o1 and o2 are true";
           else
           cout<<"o1 and o2 are false";
           if(o1&&o4)
           cout<<"\n o1 and o4 are true";
           else
           cout<<"\no1 and o4 are false";
           //return 0;
           getch();
           }
