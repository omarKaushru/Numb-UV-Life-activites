#include<iostream>
#include<conio.h>
using namespace std;
class B1{
      int x;
      public:
             B1(int i){
                    x=i;
                    }
                    };
class B2:public B1{
      int m,x;
      private:
             B2(int x,int y):B1(y){
                    m=x;
                    }
              void show(){
                   cout<<m<<x;
                   }
                   };
int main(){
    B2 ob1(1,2);
    ob1.show();
    getch();
}
