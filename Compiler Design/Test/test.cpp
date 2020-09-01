#include <iostream>
using namespace std;

int x = 1;      // a global variable

void f(int & a)
{
    a = 2;        // a and x are aliases
    x = 0;
}

int main()
{
    f(x);
    cout << x;
    return 0;
}
