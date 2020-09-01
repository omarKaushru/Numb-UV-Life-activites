#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    string line;
    char count[80];
    int i,words;
    ifstream myfile("NOTE.TXT");
    while(getline(myfile,line))
    {
    //words=0;
    cout<<line<<"\n";
    for(i=1;line[i]!='\0';i++)
    if(line[i]==' ')
    words=words+1;
    words++;
    cout<<words<<"\n";
    }
myfile.close();

    getch();
}
