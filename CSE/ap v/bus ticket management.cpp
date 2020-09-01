#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
static int p=0;
class atrans
{
char busn[5],driver[10],arrival[5],depart[5],from[10],to[10],
seat[8][4][10];
public:
void install();
void allotment();
void empty();
void show();
void available();
void position(int i);
}bus[5];//here we declare the number of buses we can have.
void vline(char ch)
{
for (int i=80;i>0;i--)//Here i's value will depend on your computer.
cout<<ch;
}
void atrans::install()
{
cout<<"Enter bus no: ";
cin>>bus[p].busn;
cout<<"\n Enter Driver's name: ";
cin>>bus[p].driver;
cout<<" Departure: ";
cin>>bus[p].depart;
cout<<"\n Arrival time: ";
cin>>bus[p].arrival;
cout<<"\n From: \t\t\t";
cin>>bus[p].from;
cout<<"\n To: \t\t\t";
cin>>bus[p].to;
bus[p].empty();
p++;
}
void atrans::allotment()
{
int seat;
char number[5];
top:
cout<<"Bus no: ";
cin>>number;
int n;
for(n=0;n<=p;n++)
{
if(strcmp(bus[n].busn,number)==0)
break;
}
while(n<=p)
{
cout<<"\n Seat number: ";
cin>>seat;
if (seat>32)
{
cout<<"\n There are only 32 seats available in this bus.";
}
else
{
if (strcmp(bus[n].seat[seat/4][(seat%4)-1],"Empty")==0)//
{
cout<<"Enter passanger's name: ";
cin>>bus[n].seat[seat/4][(seat%4)-1];//
break;
}
else
cout<<"The seat no. is already reserved.\n";
}
}
if (n>p)
{
cout<<"Enter correct bus no.\n";
goto top;
}
}
void atrans::empty()
{
for(int i=0;i<8;i++)
{
for(int j=0;j<4;j++)
{
strcpy(bus[p].seat[i][j],"Empty");//
}
}
}
void atrans::show()
{
int n;
char number[5];
cout<<"Enter bus no: ";
cin>>number;
for(n=0;n<=p;n++)
{
if(strcmp(bus[n].busn,number)==0)
break;
}
while (n<=p)
{
vline('*');
cout<<" Bus no: \t"<<bus[n].busn
<<"\n Driver: \t"<<bus[n].driver<<"\t\t Departure time:\t"
<<bus[n].depart<<"\t Arrival time:\t"<<bus[n].arrival
<<"\n From:\t asia transport\t"<<bus[n].from<<"\t\t To: \t\t\t"<<
bus[n].to<<"\n";
vline('*');
bus[0].position(n);
int a=1;
for (int i=0;i<8;i++)
{
for(int j=0;j<4;j++)
{
a++;
if(strcmp(bus[n].seat[i][j],"Empty")!=0)
cout<<"\n The seat no "<<a-1<<" is reserved for "<<bus[n].seat[i][j]<<" .";
}
}break;
}	if(n>p)
cout<<"enter correct bus no.";
}
void atrans::position(int l)
{
int s=0,p=0;
for(int i=0;i<8;i++)
{
cout<<"\n";
for(int j=0;j<4;j++)
{
s++;
if(strcmp(bus[l].seat[i][j],"Empty")==0)
{
cout.width(5);
cout.fill(' ');
cout<<s<<".";
cout.width(10);
cout.fill(' ');
cout<<bus[l].seat[i][j];
p++;
}
else
{
cout.width(5);
cout.fill(' ');
cout<<s<<".";
cout.width(10);
cout.fill(' ');
cout<<bus[l].seat[i][j];
}
}
}
cout<<"\n\n There are "<<p<<" seats empty in Bus No: "<<bus[l].busn;
}
void atrans::available()
{
for(int n=0;n<p;n++)
{
vline('*');
cout<<"Bus no: \t"<<bus[n].busn<<"\nDriver: \t"<<bus[n].driver<<"\t\tArrival time:\t"<<bus[n].arrival<<"\tDeparture Time: \t"<<bus[n].depart<<"\n From: \t\t"<<bus[n].from<<"\t\t To: \t\t\t"<<bus[n].to<<"\n";
vline('*');
vline('_');
}
}
int main()
{
//clrscr();
int w;
//int gd=DETECT,gm;
//initgraph(&gd,&gm,"d:\\tc\\bgi");//enter the path of ur c compiler where u installed it.
//setbkcolor(GREEN);
while(1)
{
cout<<"*****************************************************"<<endl;
cout<<"******* *******"<<endl;
cout<<"* The Administrator *"<<endl;
cout<<"* asia Transport Service *"<<endl;
cout<<"******* *******"<<endl;
cout<<"*****************************************************"<<endl;

cout<<"\t\t\t 1.Install\n\t\t\t 2.Reservation\n\t\t\t 3.Show \n\t\t\t 4.Buses Available. \n\t\t\t 5.Exit";
cout<<"\n\t\t\t Enter your choice:-> ";
cin>>w;
switch(w)
{
case 1:
bus[p].install();
break;
case 2:
bus[p].allotment();
break;
case 3:
bus[0].show();
break;
case 4:
bus[0].available();
break;
case 5:
exit(0);
}
}
}
