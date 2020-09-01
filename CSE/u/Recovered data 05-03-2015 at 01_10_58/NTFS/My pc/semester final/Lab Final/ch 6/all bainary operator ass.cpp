#include<conio.h>
#include<iostream>
using namespace std;
class coord{
      float x,y;
public:
     coord(){
     x=0;
     y=0;
     }
     coord(float i, float j){
     x=i;
     y=j;
     }
     void get_xy(float &i, float &j){
     i=x;
     j=y;
     }
     coord operator +(coord ob2){
     coord temp;
     temp.x=x+ob2.x;
     temp.y=y+ob2.y;
     return temp;
     }
     coord operator -(coord ob2){
     coord temp;
     temp.x=x-ob2.x;
     temp.y=y-ob2.y;
     return temp;
     }
     coord operator *(coord ob2){
     coord temp;
     temp.x=x*ob2.x;
     temp.y=y*ob2.y;
     return temp;
     }
     coord operator /(coord ob2){
     coord temp;
     temp.x=x/ob2.x;
     temp.y=y/ob2.y;
     return temp;
     }
     };
main(){
coord ob1(12,13),ob2(7,9),ob3,ob4,ob5,ob6;
float x,y;
ob3=ob1+ob2;
ob3.get_xy(x,y);
cout<<"(ob1+ob2)"<<"\n\n"<<"x  :"<<" "<<x<<"\t\t\t\t"<<"y  :"<<" "<<y<<"\n";
ob4=ob1-ob2;
ob4.get_xy(x,y);
cout<<"(ob1-ob2)"<<"\n\n"<<"x  :"<<" "<<x<<"\t\t\t\t"<<"y  :"<<" "<<y<<"\n";
ob5=ob1*ob2;
ob5.get_xy(x,y);
cout<<"(ob1*ob2)"<<"\n\n"<<"x  :"<<" "<<x<<"\t\t\t\t"<<"y  :"<<" "<<y<<"\n";
ob5=ob1/ob2;
ob5.get_xy(x,y);
cout<<"(ob1/ob2)"<<"\n\n"<<"x  :"<<" "<<x<<"\t\t\t\t"<<"y  :"<<" "<<y<<"\n";
cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
getch();
}
