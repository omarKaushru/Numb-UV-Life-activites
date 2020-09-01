#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
int a[100],i,n,x;
cout<<"Enter No of Elements : ";
cin>>n;
cout<<"\nEnter Elements : \n";
for(i=0; i<n; i++)
{
cin>>a[i];
}
cout<<"Enter the Element by which you wants to make sublist : ";
cin>>x;

cout<<"\nSublist is: "<<endl<<endl;
for(i=0; i<n; i++)
{
if(a[i]<x)
{
cout<<a[i]<<" ";            
}
}
for(i=0; i<n; i++)
{
if(a[i]>=x)
{
cout<<a[i]<<" ";            
}
}
getch();
}
