#include<iostream>
#include<conio.h>
using namespace std;
template<class T>
int Large(T &n1,T &n2)
{
    if(n1>n2)
    return n1;
    else
    return n2;
}
int main(){
    int i1,i2;
    cout<<"Enter 1st integer:";
    cin>>i1;
    cout<<"Enter 2nd integer:";
    cin>>i2;
    cout<<Large(i1,i2)<<"is Larger";
    getch();
}
