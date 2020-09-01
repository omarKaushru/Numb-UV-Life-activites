#include<iostream>
#include<conio.h>
using namespace std;
class samp{
	int a;
	public:
		samp(int n) { a=n; }
		int get_a() {return a;}
};

 main()
{
	samp ob[4] [2] = {
	1,2,
	3,4,
	5,6,
	7,8};

int i;
for(i=0; i<4; i++) {
	cout<<ob[i] [0].get_a() <<" ";
	cout<<ob[i] [1].get_a() <<"\n";
}
getch();
}

