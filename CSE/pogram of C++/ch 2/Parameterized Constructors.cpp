#include <iostream>
#include <conio.h>
using namespace std;
class myclass {
int a, b;
public:
myclass(int i, int j) {a=i; b=j;}
void show() 
{cout << a << " " << b;
}
};
main()
{
myclass ob(3, 5);
ob.show();
getch();
}
