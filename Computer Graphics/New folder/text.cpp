#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    initwindow(800,800);
    int x1=10,y1=20,x2=100,y2=20;
    for(int i=0;;i++)
    {
     cleardevice();
     x1=x1+20;
     x2=x2+20;
     line(x1,y1,x2,y2);
     delay(200);
     
    }
    getch();
}
