#include <iostream>
using namespace std;
float area(int r); //circle
int area(int l, int w);//rectang
float area(float x, int b, int h);// tri
int main()
{
cout << "Circle: " << area(5) <<endl;
cout<<"Rec:"<<area(14,5)<<endl;
cout<<"Tri:"<<area(.5,8,4)<<endl;
return 0;
}
float area(int r)
{
float a;
a=3.1416*r*r;
return a;
}
int area(int l, int w)
{
int a;
a=l*w;
return a;
}
float area(float x, int b, int h)
{
float a;
a=x*b*h;
return a;
}
