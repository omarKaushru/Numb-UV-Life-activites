#include<iostream>
#include<conio.h>
using namespace std;
class samp{
	int a;
	public:
		void set_a(int n) {a=n;}
		int get_a() {return a;}
};
main(){
	samp ob[4];
	int i;
	for(i=0; i<4; i++) ob[i].set_a(i);
	for(i=0; i<4; i++) cout<<ob[i].get_a();
	cout<< "\n";
	getch();
}
