#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
main()
{
fstream out("MEGH"); // output, normal file
if(!out) {
cout << "Cannot open ESHAN file.\n";
return 1;
}
double x,y,z;
cout<<"Enter for bus  :";
cin>>x;
out << "Bus " << x << endl;
cout<<"Enter for car  :";
cin>>y;
out << "Car " << y << endl;
cout<<"Enter for honda  :";
cin>>z;
out << "Honda " << z << endl;
out.close();

fstream in("MEGH"); // input
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
