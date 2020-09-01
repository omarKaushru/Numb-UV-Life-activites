#include<conio.h>
#include<iostream>
using namespace std;
class Sample{
      int a,b,c;
      public:
             int input(){
        int x,y;
        cout<<"Enter value for x:"<<"\n";
        cin>>x;
        cout<<"Enter value for y:";
        cin>>y;    
        a=x;
        b=y;      
                 }
                 int Addition(){
                     c=a+b;
                     }
                     int Display(){
                         cout<<"addition is    :"<<c;
                         }
      };
      main(){
            Sample ob;
            ob.input();
            ob.Addition();
            ob.Display();
            getch();
             }
