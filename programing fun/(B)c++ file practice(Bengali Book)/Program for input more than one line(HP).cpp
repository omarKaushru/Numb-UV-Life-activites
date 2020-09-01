
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
     char ch,text[512];
     int i=0;
     cout<<"Enter few line of input bellow then press Ctrl+q then press enter"<<endl;
     while(!cin.eof()){
                       cin.peek();
                       while(((ch=cin.get())!='\n')&&(ch!=17))
                       {
                       text[i++]=ch;
                       }
     if(ch==17)
     break;
     text[i++]='\n';
     text[i]=NULL;
     }
     cout<<endl<<endl<<endl<<text<<endl;
     getch();
     }
