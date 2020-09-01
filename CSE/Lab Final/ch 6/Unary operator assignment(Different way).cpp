#include<iostream>
#include<conio.h>
using namespace std;
class myclass{
      private:
              int x;int y;
      public:
             myclass(int i,int j)
             {
                        x=i;y=j;
                         }
             void get_xy(int &i,int &j)
             {
                  i=x;j=y;
             }
             friend myclass operator ++(myclass &ob);
              friend myclass operator ++(myclass &ob,int m);
              friend myclass operator --(myclass &ob);
              friend myclass operator --(myclass &ob,int m);
              };
             myclass operator ++(myclass &ob){
                          ob.x++;ob.y++;
                          return ob;
                          }
             myclass operator ++(myclass &ob,int m){
                          ob.x++;ob.y++;
                          return ob;
                          }
             myclass operator --(myclass &ob){
                            ob.x--;ob.y--;       
                          return ob;    
                          }
             myclass operator --(myclass &ob,int m){
                          ob.x--;ob.y--;
                          return ob;
                          }
      int main(){
           myclass o1(10,10);
           int x,y;
           ++o1;
           o1.get_xy(x,y);
           cout<<"x(++o1) :"<<x<<"\n"<<"y(++o1) :"<<y<<"\n\n";
           o1++;
           o1.get_xy(x,y);
           cout<<"x(o1++) :"<<x<<"\n"<<"y(o1++) :"<<y<<"\n\n";
           --o1;
           o1.get_xy(x,y);
           cout<<"x(--o1) :"<<x<<"\n"<<"y(--o1) :"<<y<<"\n\n";
           o1--;
           o1.get_xy(x,y);
           cout<<"x(o1--) :"<<x<<"\n"<<"y(o1--) :"<<y;
           cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
           cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
           getch();
           }
