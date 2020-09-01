#include<conio.h>
#include<iostream>
using namespace std;
class coord{
     int x,y;
public:
     coord(){}
     coord(int i, int j){
                        x=i;
                        y=j;
                        }
     int operator==(coord ob){
                return x==ob.x&&y==ob.y;
                }
     int operator&&(coord ob){
               return (x&&ob.x)&&(y&&ob.y);
               }
     };
main(){
     coord o1(10,10),o2(1,1),o3(5,6);
     if(o1==o2)
     cout<<"o1 are same as o2\n";
     else
     cout<<"o1 are not same as o2\n";
     if(o1&&o3)
     cout<<"o1&&o3----> is true\n";
     else
     cout<<"o1&&o3----> is false\n";
     getch();
     }
