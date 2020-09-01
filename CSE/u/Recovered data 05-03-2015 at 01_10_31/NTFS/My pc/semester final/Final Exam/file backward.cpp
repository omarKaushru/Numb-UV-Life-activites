#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;
main(int argc, char *argv[])
{
if(argc!=2){
cout<<"Usage Reverse <file name>\n";
return 1;
}
ifstream in(argv[1],ios::in|ios::binary);
if(!in){
cout<<"Can not open input file.\n";
return 1;
}
char ch;
long i;
in.seekg(0, ios::end);
i=(long) in.tellg();
i=-2;
for(i; i>=0; i--){
in.seekg(i, ios::beg);
in.get(ch);
cout<<ch;
}
in.close();
getch();
}
