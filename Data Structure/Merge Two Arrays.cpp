
#include <iostream>
#include <conio.h>
using namespace std;
main()
{
int a[100],b[100],c[100],n,m,i,j,k,s;

cout<<"------ Merging Two Array's ------";
cout<<"\n\nEnter No. of Elements in First Array : ";
cin>>n;

cout<<"\nEnter Elements in Sorted Order:\n";
for(i=1;i<=n;i++)
{
cin>>a[i];
}

cout<<"\nEnter No. of Elements in Second Array : ";
cin>>m;

cout<<"\nEnter Elements in Sorted Order:\n";
for(i=1;i<=m;i++)
{
cin>>b[i];
}

i=1,j=1;

for(k=1;k<=n+m;k++)      
{
if(a[i]<b[j])           // Compare Elements of Array A and Array B  
{
c[k]=a[i];
i++;

if(i>n)
goto b;
}

else
{
c[k]=b[j];
j++;

if(j>m)
goto a;
}
}


a:             
for(s=i;s<=n;s++)        // Copy the Remaining Elements of Array A to C 
{
k++;
c[k]=a[s];
}


b:
for(s=j;s<=m;s++)       // Copy the Remaining Elements of Array B to C 
{
k++;
c[k]=b[s];
}

cout<<"\n\nAfter Merging Two Arrays:\n";

for(k=1;k<=n+m;k++)
{
cout<<c[k]<<endl;
}

getch();
}
