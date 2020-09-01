#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
main(){
       ifstream myfile("sample.txt");
       //myfile.open("sample.txt");
       if(!myfile){
                   cout<<"File error.....!";
                   return 0;
                   }
       while(!myfile.eof())
       cout.put((char)myfile.get());
       myfile.close();
       getch();
       }
