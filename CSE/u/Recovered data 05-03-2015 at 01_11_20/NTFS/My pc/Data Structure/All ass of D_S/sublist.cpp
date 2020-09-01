#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
int a[12]={44,33,11,55,77,90,40,60,99,22,88,66};
int j;
cout<<"Sublist is :"<<endl;
for(j=0;j<=11;j++)
{
if(a[j]<44)
{
cout<<a[j]<<" ";            
}
}
for(j=0;j<=11;j++)
{
if(a[j]>=44)
{
cout<<a[j]<<" ";            
}
}
getch();
}
