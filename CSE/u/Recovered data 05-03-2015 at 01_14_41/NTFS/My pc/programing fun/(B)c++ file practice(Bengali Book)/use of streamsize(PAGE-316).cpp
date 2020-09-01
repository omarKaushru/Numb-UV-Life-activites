#include<iostream.h>
#include<conio.h>
using namespace std;
int main(){
    double sal=4532.99999;
    cout.fill('.');
    cout<<"Name:";
    cout.width(24);
    cout<<"Abdus Satter Sir"<<"\n";
    cout.width(19);
    cout.setf(ios::left);
    cout<<"Salary:";
    cout.precision(9);
    //cout.width(10);
    cout.setf(ios::right|ios::showpoint);
    cout<<sal;
    cout.setf(ios::showbase);
    cout<<"\n"<<hex<<(int)sal;
    getch();
}    
