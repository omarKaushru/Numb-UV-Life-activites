#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip.h>
using namespace std;
int main(){
       ofstream myfile("alphabet.txt");
       if(!myfile){
       cout<<"File error...!";
       return 0;
       }
       myfile<<"Capital Letter :"<<endl;
       for(int i='A';i<='Z';i++){
       myfile.width(5);
       myfile<<(char)i;
       }
       myfile<<endl<<"Small Letter :"<<endl;
       for(int i='a';i<='z';i++){
       myfile.width(5);
       myfile<<(char)i;
       }
       myfile.close();
       getch();
       }
