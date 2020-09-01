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
           x=i;y=j;
        }
      int operator==(coord ob2){
             return x==ob2.x && y==ob2.y;
             }
      int operator&&(coord ob2){
             return (x && ob2.x) && (y && ob2.y);
             }
      };
main(){
coord o1(10,10),o2(5,3),o3(10,10),o4(0,0);
if(o1==o2)
cout<<"o1 same as o2\n";
else
cout<<"o1 and o2 differ\n";
if(o1==o3)
cout<<"o1 same as o3\n";
else
cout<<"o1 and o3 differ\n";
if(o1&&o2)
cout<<"o1 and o2 is true\n";
else
cout<<"o1 and o2 false\n";
if(o1&&o4)
cout<<"o1 and o4 is true\n";
else
cout<<"o1 and o4 false\n";
cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
getch();
}
