#include <conio.h>
#include <iostream>
using namespace std;
class loc {
int x, y;
public:
loc() {}   // needed to construct temporaries
loc(int i, int j) {
x=i;
y=j;
}
loc operator+(loc o2)
{
loc temp;
temp.x = o2.x + x;
temp.y = o2.y + y;
return temp;
}
void show() {
cout << x << " ";
cout <<y << "\n";
}
};
main()
{
loc ob1(10, 20), ob2( 5, 30);
(ob1+ob2).show();
getch();
}
