/* This program uses eof( ) to display the contents of a file in both hexadecimal
and ASCII */

#include <conio.h>
#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
using namespace std;
int main(int argc, char *argv[])
{
if(argc!=2) {
cout << "Usage: Display <filename>\n";
return 1;
}
ifstream in(argv[1], ios::in | ios::binary);
if(!in) {
cout << "Cannot open input file.\n";
return 1;
}
register int i, j;
int count = 0;
char c[16];
cout.setf(ios::uppercase);
while(!in.eof()) {
for(i=0; i<16 && !in.eof(); i++) {
in.get(c[i]);
}
if(i<16) i--; /* get rid of eof  */
for(j=0; j<i; j++)
cout << setw(3) << hex << (int) c[j];
for(; j<16; j++) cout << " ";
cout << "\t";
for(j=0; j<i; j++)
if(isprint(c[j])) cout << c[j];
else cout << ".";
cout << endl;
count++;
if(count==16){
count = 0;
cout << "Press ENTER to continue: ";
cin.get();
cout << endl;
}
}
in.close();
getch();
}

/* We can detect when the end of the file is reached by using the member function eof( ),
which has this prototype:
bool eof( );
It returns true when the end of the file has been reached; otherwise it returns false. */
