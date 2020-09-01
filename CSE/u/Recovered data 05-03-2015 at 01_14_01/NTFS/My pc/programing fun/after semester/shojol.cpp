#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;
main(){
       char ch, text[512];
       int i=0;
       cout<<"Enter few line then press Ctrl+q then press enter"<<endl;
       while(!cin.eof()){
                         cin.peek();
                         while(((ch=cin.get())!='\n')&&(ch!=17)){
                                                                 text[i++]=ch;
                                  }
                         if(ch==17)break;
                         text[i++]='\n';
                         }
       text[i]='\0';
       cout<<endl<<endl<<"You enterd  \n"<<text<<endl;
       getch();
       }
