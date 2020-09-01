#include<conio.h>
#include<iostream>
#include<ctime>
using namespace std;
class t_and_d{
      time_t systime;
      public:
             t_and_d(time_t t){
                             systime=t;                    
                            }
                            void show(){
                                 cout<<"Current time : "<<ctime(& systime);
                                 }
                            
      };
      main(){
             time_t x;
             x=time(NULL);
             t_and_d ob(x);
             ob.show();
             getch();
             }
