#include<conio.h>
#include<iostream>
using namespace std;
class planet{
protected:
          double distance;
          int revolve;
public:
  planet(double d, int r){
         distance=d;
         revolve=r;
                }
      };
class earth : public planet{
      double circumference;
public:
       earth(double d, int r) : planet(d,r){
                    circumference=2*distance*3.1416;
                    }
       void show(){
            cout<<"Distance fro the sun  :"<<distance<<"\n";
            cout<<"Days in orbit  :"<<revolve<<"\n";
            cout<<"Circumference of orbit  :"<<circumference<<"\n";
            }
      };
main(){
       earth ob(93000000,365);
       ob.show();
       cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
