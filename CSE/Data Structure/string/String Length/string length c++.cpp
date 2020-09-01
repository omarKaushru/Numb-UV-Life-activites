#include <iostream>
#include <conio.h>
using namespace std;
main(){
char str[100];
int length=0;
cout<<"\nEnter the String :";
gets(str);
while (str[length]!='\0'){
length++;
}
cout<<"\nLength of the String is : "<< length;
getch();
}
