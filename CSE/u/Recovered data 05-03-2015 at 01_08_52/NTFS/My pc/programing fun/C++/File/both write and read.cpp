#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
main()
{
ofstream out("ESHAN"); // output, normal file
if(!out) {
cout << "Cannot open ESHAN file.\n";
return 1;
}
out << "Bus " << 34987.197 << endl;
out << "Car " << 5545.875 << endl;
out << "Honda " << 1200.456 << endl;
out.close();

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
