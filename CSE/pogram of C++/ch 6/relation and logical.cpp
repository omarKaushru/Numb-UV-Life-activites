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
     void get(int &i, int &j){
                             i=x;
                             j=y;
                             }
     int operator==(coord ob2){
                          return x==ob2.x&&y==ob2.y;
                              }
     int operator&&(coord ob2){
                         return (x&&ob2.x)&&(y&&ob2.y);
                              }
     };
     main(){
            coord o1(10,10),o2(5,3),o3(10,10),o4(0,0);
            if(o1==o2)
            cout<<"o1 are same as o2\n";
            else
            cout<<"o1 are not same as o2\n";
            if(o1==o3)
            cout<<"o1 are same as o3\n";
            else
            cout<<"o1 are not same as o3\n";
            if(o1&&o2)
            cout<<"o1&&o2----> is true\n";
            else
            cout<<"o1&&o2----> is false\n";
             if(o1&&o4)
            cout<<"o1&&o4----> is true\n";
            else
            cout<<"o1&&o4----> is false\n";
            getch();
            }
