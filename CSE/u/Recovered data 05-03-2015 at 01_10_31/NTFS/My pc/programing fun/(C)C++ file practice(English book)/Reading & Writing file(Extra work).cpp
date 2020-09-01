#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
main(){
       ofstream Sajal_out("Sajal_info.txt");
       if(!Sajal_out){
                      cout<<"error";
                      return 1;
                      }
       Sajal_out<<"Name:SajalAcharjee"<<endl;
       Sajal_out.close();
       ifstream Sajal_in("Sajal_info.txt");
       char information[500];
       Sajal_in>>information;
       cout<<information<<' '<<endl;
       Sajal_in.close();
       getch();
       }
