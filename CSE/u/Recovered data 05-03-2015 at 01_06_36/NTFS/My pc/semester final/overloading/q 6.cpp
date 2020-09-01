#include<conio.h>
#include<iostream>
using namespace std;
class loc {
int x,y;
public:
loc() {} // needed to construct temporaries
loc(int i, int j) {
x = i;
y = j;
}
loc operator--()
{
--x;
--y;
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
(--ob1).show(); // displays 9 19
getch();
}
