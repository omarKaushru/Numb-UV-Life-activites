#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
main()
{
double fnum[4] = {99.75, -34.4, 1776.0, 200.1};
int i;
ofstream out("numbers", ios::out | ios::binary);
if(!out) {
cout << "Cannot open file.";
return 1;
}
out.write((char *) &fnum, sizeof fnum);
out.close();
for(i=0; i<4; i++) // clear array
fnum[i] = 0.0;
ifstream in("numbers", ios::in | ios::binary);
in.read((char *) &fnum, sizeof fnum);
// see how many bytes have been read
cout << in.gcount() << " bytes read\n";  //gcount( ) is used to determine how many bytes were just read.
for(i=0; i<4; i++) // show values read from file
cout << fnum[i] << " ";
in.close();
getch();
}
