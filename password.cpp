#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
#include<cstdlib>
#include<string>
#include<sstream>
int main()
{
	l:
		system ("COLOR 0C");
   string pass ="";
   char ch;
      string m;
	float p=0;
	int q=0;
   cout << "Enter password :\n";
   ch = _getch();
   while(ch != 13)
   {//character 13 is enter
      pass.push_back(ch); //this line i have prob//
      cout << '*';
      ch = _getch();
   }
   if(pass == "hmaahad")
   {
       system ("COLOR 0A");
      cout << "\nAccess granted, Lets Go To Program\n";

	cout<<"\nEnter Price : ";
	getline(cin,m);
	stringstream(m)>>p;
	cout<<"\nEnter Quantity : ";
	getline(cin,m);
	stringstream(m)>>q;
	cout<<"\nTotal Price: "<<p*q<<endl;
	cout<<"\n\nThank You :)"<<endl;
	return 0;
   }
   else
   {
      cout << "\nWrong Password... Try again...\n\n";
      goto l;
   }
getch();
}

