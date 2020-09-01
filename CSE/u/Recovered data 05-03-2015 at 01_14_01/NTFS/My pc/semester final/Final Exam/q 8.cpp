#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;
main(int argc, char *argv[])
{
char ch;
if(argc!=2){
cout<<"Usage: copyrev <source> <target>\n";
return 1;
}
ifstream in(argv[1]);
if(!in){
cout<<"Can not open input file.\n";
return 1;
}
ofstream out(argv[2]);
if(!out){
cout<<"cannot open output file.\n";
return 1; 
}
while(!in.eof()){
ch-in.get();
if(!in.eof()){
if(islower(ch)) ch=toupper(ch);
else ch= tolower(ch);
out.put(ch);
}
};
in.close();
out.close();
getch();
}
