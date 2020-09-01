#include<conio.h>
#include<iostream>
using namespace std;
class building{
protected:
          int floors,rooms;
          double footage;
      };
class house : public building{
      int bedrooms,bathrooms;
public:
       house(int f,int r,double ft,int br,int bth){
       floors=f;
       rooms=r;
       footage=ft;
       bedrooms=br;
       bathrooms=bth;
          }
       void show(){
            cout<<"Floors  :"<<floors<<"\n";
            cout<<"Rooms   :"<<rooms<<"\n";
            cout<<"Square footage  :"<<footage<<"\n";
            cout<<"Bedrooms  :"<<bedrooms<<"\n";
            cout<<"Bathrooms   :"<<bathrooms<<"\n";
            }
      };
class office : public building{
      int phones,extinguishers;
public:
       office(int f,int r,double ft,int p,int ext){
                  floors=f;
                  rooms=r;
                  footage=ft;
                  phones=p;
                  extinguishers=ext;
                  }
       void show(){
            cout<<"Floors  :"<<floors<<"\n";
            cout<<"Rooms   :"<<rooms<<"\n";
            cout<<"Square footage  :"<<footage<<"\n";
            cout<<"Telephones  :"<<phones<<"\n";
            cout<<"Fire extinguishers  :"<<extinguishers<<"\n";
            }
      };
main(){
       house h_ob(2,12,5000,6,4);
       office o_ob(4,25,1200,30,8);
       cout<<"House------->\n";
       h_ob.show();
       cout<<"\nOffice---->\n";
       o_ob.show();
       cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
