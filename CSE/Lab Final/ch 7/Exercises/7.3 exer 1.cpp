#include<iostream>
#include<conio.h>
using namespace std;
class mybase{
      char str[80];
public:
    mybase(char *s){
                strcpy(str,s);
                }
    char *get(){
         return str;
         }
      };
class myderived : public mybase{
      int len;
public:
     myderived(char *s):mybase(s){
                len=strlen(s);
                }
     int getlen(){
         return len;
         }
     void show(){
          cout<<get()<<"\n\n";
          }
     };
main(){
       myderived ob("hello mother");
       ob.show();
       cout<<"Length of this string  :"<<ob.getlen()<<"\n";
       cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
