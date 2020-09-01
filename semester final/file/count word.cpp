#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;
main(int argc, char *argv[])
{
if(argc!=2){
cout<<"Usage: count<input>\n";
return 1;
}
ifstream in(argv[1]);
if(!in){
cout<<"Cannot open text file.\n";
return 1;
}
int coun=0;
char ch,issapce;
in.unsetf(ios::skipws);
while(!in.eof()){
in>>ch;
if(isspace(ch)){
count++;
while(issapce(ch)&&!in.eof())in>>ch;
}
}
cout<<"Word count"<<count<<"\n";
in.close();
getch();
}
