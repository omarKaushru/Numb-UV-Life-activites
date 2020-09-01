#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    string line[80];
    int i;
    //char line[80];
    ifstream myfile("OUT.TXT");
    if(myfile.is_open())
    {
    while(getline(myfile,line[i]))
    {
    myfile.getline(line,sizeof(line));
    //myfile.seekg(sizeof(line),ios::end);
    cout<<line.gcount<<"\n";
    myfile.close();
}
}
else
cout<<"file is not allocated";


getch();
}

