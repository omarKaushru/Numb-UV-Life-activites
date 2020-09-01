#include<iostream>
#include<conio.h>
#include<typeinfo>
using namespace std;
class base{};
class derived:base{};
main(){
       base Sakib_Khan;
       derived Opu_Biswash,Bappi;
       if(typeid(Sakib_Khan)==typeid(Opu_Biswash))
       cout<<"Sakib_Khan and Opu_Biswash are same class\n";
       else
       cout<<"Sakib_Khan hates Opu_Biswash.\necause they are not same class\n\n";
       if(typeid(Opu_Biswash)==typeid(Bappi))
       cout<<"Now Opu_Biswash loves Bappi.\nBecause they are same class";
       else
       cout<<"Opu_Biswash and Bappi are not same class\n";
       getch();
       }
       /* typeid() this is a build in function which is work for compare two object of diffrent class */
