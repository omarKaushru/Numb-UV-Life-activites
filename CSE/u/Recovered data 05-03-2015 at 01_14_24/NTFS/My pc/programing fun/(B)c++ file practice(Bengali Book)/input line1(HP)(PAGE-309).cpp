#include<iostream.h>
#include<conio.h>
using namespace std;
main(){
char line[80]; 
cout<<"Enter line";                   
cin.getline(line,sizeof(line));
//cout.setf(ios::upparcase);
cout<<endl<<line<<endl;
cout<<"No. of characters:"<<cin.gcount();
getch();
}
/*Why count \0 in no of characters*/
