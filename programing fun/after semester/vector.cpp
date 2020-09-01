#include <conio.h>
#include <iostream>
#include <vector>
using namespace std;
main()
{
vector<int> v;
int i;
cout<<"Size = "<<v.size()<<endl;
for(i=0; i<10; i++)
cout<<"Size now = "<<v.size()<<endl;
for(i=0; i<10; i++)
v.push_back(i);
cout<<"Size now = "<<v.size()<<endl;
cout<<"Currents contents :\n";
for(i=0; i<v.size(); i++)
cout<<v[i]<<' '<<endl;
for(i=0; i<10; i++)
v.push_back(i+10);
cout<<"Size now = "<<v.size()<<endl;
cout<<"Currents contents :\n";
for(i=0; i<v.size(); i++)
cout<<v[i]<<' '<<endl;
for(i=0; i<v.size(); i++)
v[i]=v[i]+v[i];
cout<<"Currents doubled :\n";
for(i=0; i<v.size(); i++)
cout<<v[i]<<' '<<endl;
cout<<".............The end...........";
getch();
}
