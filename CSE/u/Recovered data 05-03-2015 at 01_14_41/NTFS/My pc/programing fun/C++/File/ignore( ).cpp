#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
main()
{
ifstream in("OUT.TXT");
if(!in) {
cout << "Cannot open file.\n";
return 1;
}
/* Ignore up to 2 characters or until first
space is found. */
in.ignore(2, ' ');
char c;
while(in) {
in.get(c);
if(in) cout << c;
}
in.close();
getch();
}
/* if we wants to ignore any character from any input file. we can use this ignore() function. */
