#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
main()
{
ofstream out("zaq"); // output, normal file
if(!out) {
cout << "Cannot open zaq file.\n";
return 1;
}
out << "Radios " << 39.95 << endl;
out << "Toasters " << 19.95 << endl;
out << "Mixers " << 24.80 << endl;
out.close();
getch();
}
