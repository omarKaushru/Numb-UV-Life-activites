#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class amin{
      public:
      amin(){
           char str[56]="\n\n  \t\t\t\t <<<how are You>>>";;
           ofstream myfile("NOTES.TXT");
           if(myfile.is_open())
           {
           myfile<<str;
           myfile.close();
           }
           else
           {
               cout<<"Unable to open file";
               }
          }
          };
          
      int main(){
           amin ob;
           getch();
           return 0;
           }
