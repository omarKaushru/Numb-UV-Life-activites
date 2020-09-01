#include<iostream>
#include<conio.h>
using namespace std;
class samp{
	int i,j;
	public:
		void set_ij(int a, int b) { i=a; j=b;}
		int get_product() {return i*j;}
};
main()
{
	samp*p;
	int i;
	
	p=new samp[10];
	if(!p){
		cout<<"Allocation error\n";
		return 1;
	}
	for(i=0; i<10; i++)
	p[i].set_ij(i, i);
	
	for(i=0; i<10; i++){
		cout<<"productn ["<<i<<"] is: ";
		cout <<p[i].get_product()<<"\n";
	}
	delete[] p;
	getch();
}
