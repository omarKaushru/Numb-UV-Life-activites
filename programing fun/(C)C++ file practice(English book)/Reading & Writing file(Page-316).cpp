#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
main(){
       ofstream fileout("test.txt");
       if(!fileout){
                   cout<<"Cannot open output file.\n";
                   return 1;
                   }
       fileout<<"Name Hello!\n";
       fileout<<100<<' '<<hex<<100<<endl;
       fileout.close();
       ifstream filein("test.txt");
       if(!filein){
                   cout<<"Cannot open input file.\n";
                   return 1;
                   }
       char str[80];
       int i;
       filein>>str>>i;
       cout<<str<<' '<<i<<' '<<hex<<i<<endl;
       filein.close();
       getch();
       } 
