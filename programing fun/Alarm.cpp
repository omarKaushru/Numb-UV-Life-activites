/*
  Name: Alarm
  Copyright: Kaushru
  Author: Kaushru. Spring 14.
  Date: 03/05/15 22:03
  Description: This program can alarm!
*/
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
             if (ctime(& systime)==ctime(& systime)){
             cout<<"Plz getup Boss:";
             for(int i=0; i<=10; i++){
             cout<< '\a'<< '\a'<< '\a';
             }
             }
             cout<<"\n Have a good day!";
             }
                            
      };
      main(){
             time_t x;
             x=time(NULL);
             t_and_d ob(x);
             ob.show();
             getch();
             }
