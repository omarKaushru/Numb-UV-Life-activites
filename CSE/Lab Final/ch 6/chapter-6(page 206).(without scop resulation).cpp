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
void get_xy(int &i,int &j){
i=x;j=y;
}
coord operator+(coord ob2){
coord temp;
temp.x=x+ob2.x;//here x means 10 of object o1 and ob2.x means 5 of object o2;
temp.y=y+ob2.y;//here x means 13 of object o1 and ob2.x means 3 of object o2;
return temp;
}
coord operator-(coord ob2){
coord temp;
temp.x=x-ob2.x;
temp.y=y-ob2.y;
return temp;
}
coord operator=(coord ob2){
coord temp;
x=ob2.x;
y=ob2.y;
return temp;
}
};
main(){
coord o1(10,13),o2(5,3),o3;
int x,y;
o3=o1+o2;
o3.get_xy(x,y);
cout<<"(o1+o2)x:"<<x<<",y:"<<y<<"\n";
o3=o1-o2;
o3.get_xy(x,y);
cout<<"(o1+o2)x:"<<x<<",y:"<<y<<"\n";
o3=o1;
o3.get_xy(x,y);
cout<<"(o1+o2)x:"<<x<<",y:"<<y<<"\n";
cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
getch();
}
                                                          
