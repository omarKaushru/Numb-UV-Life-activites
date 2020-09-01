#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    string line;
    ifstream myfile("OUT.TXT");
    if(myfile.is_open())
    {
    while(getline(myfile,line))
    {
    //myfile.seekg(sizeof(line),ios::end);
    cout<<line<<"\n";
    myfile.close();
}
}
else
cout<<"file is not allocated";


getch();
}

