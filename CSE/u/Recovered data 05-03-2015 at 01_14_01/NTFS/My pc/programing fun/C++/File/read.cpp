#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
main()
{
ifstream in("ESHAN"); // input
if(!in) {
cout << "Cannot open ESHAN file.\n";
return 1;
}
char name[20];
double t;
in >> name >> t;
cout << name << " " << t << "\n";
in >> name >> t;
cout << name << " " << t << "\n";
in >> name >> t;
cout << name << " " << t << "\n";
in.close();
getch();
}
