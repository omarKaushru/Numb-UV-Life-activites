///Accepted
#include <cstring>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int t,i,m,d,n,j,c;
    char mon[10],day[10];
    cin>>t;
    for(i=0; i<t; i++)
    {
        c=0;
        cin>>mon>>day;
        if(strcmp(mon,"JAN")==0 || strcmp(mon,"MAR")==0 || strcmp(mon,"MAY")==0 || strcmp(mon,"JUL")==0 || strcmp(mon,"AUG")==0 || strcmp(mon,"OCT")==0 || strcmp(mon,"DEC")==0)
        m=31;
        else if(strcmp(mon,"FEB")==0)
        m=28;
        else
        m=30;
        if(strcmp(day,"SUN")==0)
        d=1;
        else if(strcmp(day,"MON")==0)
        d=2;
        else if(strcmp(day,"TUE")==0)
        d=3;
        else if(strcmp(day,"WED")==0)
        d=4;
        else if(strcmp(day,"THU")==0)
        d=5;
        else if(strcmp(day,"FRI")==0)
        d=6;
        else if(strcmp(day,"SAT")==0)
        d=7;
        n=d;
        for(j=n; j<(m+d); j++)
        {
            if(j%7==0 || j%7==6)
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
