#include<iostream>
#include<conio.h>
using namespace std;
class building{
      //int a,b,j;
      public:
                int floors,rooms,sqft;
                };
             class House:public building
             {
             protected:
             int bedrooms,bathrooms;
             };
      class Office:public House
      {
            int telephone;
      public:
       Office(int f,int r,int sq,int b,int bath,int t)
       {
        floors=f;rooms=r;sqft=sq;bedrooms=b,bathrooms=bath,telephone=t;
       }
       void Display()
       {
            cout<<"floors     : "<<floors<<"\n"<<"rooms      : "<<rooms<<"\n"<<"sqft       : "<<sqft<<"\n";
            cout<<"bedrooms   : "<<bedrooms<<"\n"<<"bathrooms  : "<<bathrooms<<"\n"<<"telephone  : "<<telephone;
            }
       };
int main(){
        Office ob(10,40,20000,40,10,10);
        ob.Display();
        getch();
        }
