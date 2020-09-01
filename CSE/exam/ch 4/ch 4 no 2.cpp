#include<iostream>
#include<conio.h>
using namespace std;
class person{
      char name[40],phone[40];
      public:
             void put(char *n, char*p){
                  strcpy(name,n);
                  strcpy(phone,p);
                  }
                  void display(){
                       cout<<"name of this person  "<<name<<"\n";
                       cout<<"phone number  "<<phone;
                       }
      };
      main(){
             person *k;
             k=new person;
             if(!k){
                    cout<<"allocation error";
                    return 1;
                    }
                    k->put("omar kaushru", "166516");
                    k->display();
                    delete k;
                    getch();
             }
