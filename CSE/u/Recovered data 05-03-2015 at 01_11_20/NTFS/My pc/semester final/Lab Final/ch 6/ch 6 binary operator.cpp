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
      i=x;
      j=y;
      }
      coord operator +(coord ob2){
      coord temp;
      temp.x=x+ob2.x;
      temp.y=y+ob2.y;
      return temp;
      }
    };
  main(){
  coord ob1(12,13),ob2(7,9),ob3;
  int x,y;
  ob3=ob1+ob2;
  ob3.get_xy(x,y);
  cout<<"(ob1+ob2)"<<"\n\n"<<"x  :"<<" "<<x<<"\t\t\t\t"<<"y  :"<<" "<<y<<"\n";
  cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
  cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
  getch();
  }
