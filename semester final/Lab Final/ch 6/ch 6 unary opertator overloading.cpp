#include<conio.h>
#include<iostream>
using namespace std;
class temp{
      int count;
public:
    temp(){
       count=5;
        }
    void operator ++(){
            count=1+count;
            }
    void display(){
           cout<<"count   :"<<count;
           }
      };
      main(){
             temp t;
             ++t;
             t.display();
             cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
             cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
             getch();
             }
