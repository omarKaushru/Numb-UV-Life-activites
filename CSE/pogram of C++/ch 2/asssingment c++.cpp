#include<iostream>
#include<conio.h>
using namespace std;
class circle{
      int a,b,c;
      public:
             circle(int x,int y){
             a=x;
             b=y;
             }
             
             int areacircle(){
                 c=.5*a*b;
                 }
int show(){
    cout<<c;
}
};
    main(){
    circle ob(10,20);
    ob.areacircle();
    ob.show();
    getch();
    }
    
