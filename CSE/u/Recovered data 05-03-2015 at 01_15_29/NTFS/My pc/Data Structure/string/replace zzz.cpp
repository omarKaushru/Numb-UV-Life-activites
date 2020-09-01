#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
main()
{
string str1("xxxxyyyzzzz"), str2("mmm"),t;
int i,j;
cout << "Initial strings:\n";
cout << "str1: " << str1 << endl;
cout << "str2: " << str2 << "\n\n";
i = str1.find("yyy");
j=str2.size();
cout << "After Replacing  :"<<endl<<endl;
t=str1.replace(i, j, str2);
cout<<"\t" << t << endl;
getch();
}

