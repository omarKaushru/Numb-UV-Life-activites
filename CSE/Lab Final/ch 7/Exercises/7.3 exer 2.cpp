#include<iostream>
#include<conio.h>
using namespace std;
class vehicle{
      int num_wheels,range;
public:
       vehicle(int w, int r){
                   num_wheels=w;
                   range=r;
                   }
       void showv(){
            cout<<"Wheels  :"<<num_wheels<<"\n"<<"Range  :"<<range<<"\n";
            }
      };
class car : public vehicle{
      int passengers;
public:
       car(int p, int w, int r):vehicle(w,r){
               passengers=p;
               }
       void show(){
            showv();
            cout<<"Passengers  :"<<passengers<<"\n";
            }
      };
class truck : public vehicle{
      int loadlimit;
public:
       truck(int l, int w, int r):vehicle(w,r){
                 loadlimit=l;
                 }
       void show(){
            showv();
            cout<<"Loadlimit  :"<<loadlimit<<"\n";
            }
      };
main(){
       car c(5,4,500);
       truck t(30000,12,1200);
       cout<<"Car  :\n";
       c.show();
       cout<<"\nTruck  :\n";
       t.show();
       cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
