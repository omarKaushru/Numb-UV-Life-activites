#include<iostream>
#include<conio.h>
using namespace std;
class sky{
      int a,b,c,d,e;
      public:
             sky(int x,int y,int z){
             a=x;
             b=y;
             d=z;
             }
             
             int areatriangle(){
                 c=.5*a*b;
                 }
int show(){
    cout<<" triangle   :  ";
    cout<<c;
}
    int areacircle(){
                 e=3.1416*d;
                 }
int print(){
    cout<<" \n circle     :  ";
    cout<<e;
}
};
    main(){
    sky ob(10,20,5);
    ob.areatriangle();
    ob.areacircle();
    ob.show();
    ob.print();
    getch();
    }
    
