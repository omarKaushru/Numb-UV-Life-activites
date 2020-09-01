#include<conio.h>
#include<iostream>
using namespace std;
class loc {
int x,y;
public:
loc() {}           // needed to construct temporaries  
loc(int i, int j) {
x = i;
y = j;
}
loc operator++()
{
x=x+3;
y=y+3;
return *this;
}
void show() {
cout << x << " ";
cout << y << "\n";
}
};
main()
{
loc ob1(10, 20);
++ob1;
ob1.show(); // displays 13 23
getch();
}
