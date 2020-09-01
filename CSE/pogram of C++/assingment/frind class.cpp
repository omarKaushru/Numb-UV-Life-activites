#include<conio.h>
#include <iostream>
using namespace std;
class TwoValues {
int a;
public:
TwoValues(int i) { a = i; }
friend class Min;
};
class Min {
      public:
int tin(TwoValues x){
  return  x.a;
  }
  };
main()
{
TwoValues ob(1);
Min m;
cout<<"checking status"<<"\n";
if(m.tin(ob)>5){
                 cout<<"i m free";
               
              }
                else
                 cout<<"i m busy";

getch();
}
