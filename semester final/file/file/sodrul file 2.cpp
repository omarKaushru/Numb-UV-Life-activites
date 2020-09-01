#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
      class sodrul{
           public:
       sodrul(){
                           
           ofstream myfile("NOTES.TXT");
           if(myfile.is_open())
           {
           myfile<<"This is a line.\n";
           myfile<<"This is another line.\n";
           int i;
           for(i=0;i<=100;i++)
           myfile<<i<<" ";
           //cout<<i<<"  ";}
           myfile.close();
           }
           else
           {cout<<"Unable to open file";}
          // myfile=fwrite("example3.txt");
          }
          };
          
          int main(){
                     sodrul ob;
                     getch();
                     return 0;
                      }
