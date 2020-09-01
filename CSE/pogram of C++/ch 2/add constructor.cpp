#include<iostream>
#include<conio.h>
using namespace std;
class myclass{
      int a,b,c;
      public:
             myclass(int x,int y){
             a=x;
             b=y;
             }
             
             int add(){
                 c=a+b;
                 }
int show(){
    cout<<c;
}
};
    main(){
    myclass ob(10,20);
    ob.add();
    ob.show();
    getch();
    }
    
