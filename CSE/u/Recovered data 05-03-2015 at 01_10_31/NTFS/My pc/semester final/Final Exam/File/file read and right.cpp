#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class amin{
      public:
      amin(){
           char str[200]="                            <<write and read from file>>\n\n # <<<NAME:sodrul>>\n\n # <<ID:1401020010>>";
           ofstream myfile("sodrul.TXT");
           if(myfile.is_open())
           {
           myfile<<str;
          //{ 
          // cout<<str;}
           myfile.close();
           }
           else
           {cout<<"Unable to open file";}
        {   ifstream myfile;
           myfile.open("sodrul.TXT");
           if(!myfile)
           {cout<<"file error";
           }
           while(!myfile.eof())
           cout.put((char)myfile.get());
           myfile.close();
           }
           }
           };
           int main(){
                      amin ob;
                      getch();
                      return 0;
                      }
