#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;
ostream &td(ostream &stream){
        struct tm *localt;
        time_t t;
        t=time(NULL);
        localt=localtime(&t);
        stream<<asctime(localt)<<endl;
        return stream;
        }
main(){
       cout<<td<<"\n";
       getch();
       }
