#include<conio.h>
#include <iostream>
using namespace std;
class pr1 {
int a;
public:
          pr1(){
                  int i;
                cout<<"press the key      "<<"\n\n\n";
                cin>>i;
                a=i;
                }
friend class pr2;
};
class pr2 {
      public:
int inuse(pr1 x){
  return  x.a;
  }
  };
main()
{
pr1 ob;
pr2 z;
cout<<"\n\nBlack asked Berry about status --->"<<"\n\n\n\n";
cout<<">>>>>>>>>>>  Status Checking......"<<"\n\n\n";
if(z.inuse(ob)>3)

                 cout<<"  Working now";
               else
                 cout<<"  Not working";
cout<<"\n \n \n \n \n\t \t \t <<<<<<<   Thank you Sir  >>>>>>>";
getch();
}
