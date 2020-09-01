#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a[1000],i,j,temp,n;
cout<<"N=";
cin>>n;
cout<<"Enter integer number  :\n";
for(j=0;j<n;j++)
cin>>a[j];
for(j=0;j<n;j++)
{
for(i=0;i<n;i++)
{
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
}
cout<<"\n\narray after sorting\n";
for(i=0;i<n;i++)
cout<<a[i]<<' '; 
cout<<"\n\n\n\n\t\t\tWish you good luck!";
getch();
}
