// Manually create a call-by-reference using a pointer.
#include<iostream>
#include<conio.h>
using namespace std;
int neg(int *i);
main()
{
int x;
x = 32;
cout << x << " negated is ";
neg(&x);
cout << x << "\n";
getch();
}
int neg(int *i)
{
*i = -*i;
}
