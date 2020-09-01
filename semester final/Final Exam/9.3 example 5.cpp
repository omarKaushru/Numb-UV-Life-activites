#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;
main()
{
ofstream out("test",ios::out | ios::binary);
if(!out){
cout<<"Can not open output file.\n";
return 1;
}
double nums[8]={1.1,2.2,3.3,4.4,5.7,8.9,9.01,80.7};
out.write((char *)nums,sizeof(nums));
out.close();
ifstream in("test",ios::in | ios::binary);
if(!in){
cout<<"Can not open input file.\n";
return 1;
}
in.read((char *) &nums, sizeof(nums));
int i;
for(i=0; i<8; i++)
cout<<nums[i]<<","<<' ';
cout<<"\n";
cout<<in.gcount()<<"Characters read\n";
in.close();
getch();
}
