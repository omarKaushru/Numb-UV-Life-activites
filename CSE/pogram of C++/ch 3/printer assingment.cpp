#include<conio.h>
#include <iostream>
using namespace std;
class black {
int a;
public:
black(int i){
          a = i; 
          }
friend class berry;
};
class berry {
      public:
int bluebird(black x){
  return  x.a;
  }
  };
main()
{
black ob(1);
berry z;
cout<<"\n\nBlack asked Berry about status --->"<<"\n\n\n\n";
cout<<">>>>>>>>>>>  Status Checking......"<<"\n\n\n";
if(z.bluebird(ob)>5)

                 cout<<"  Working now";
               else
                 cout<<"  Not working";
cout<<"\n \n \n \n \n\t \t \t <<<<<<<   Thank you Sir  >>>>>>>";
getch();
}
