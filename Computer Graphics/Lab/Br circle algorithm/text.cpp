#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    initwindow(800,800);
    int x1=100,y1=120,x2=200,y2=200;
    int r=70;
    int x=0,y=r,h=150,k=150,d;
    d=3-2*y;
    while(x<=y)
    {
      putpixel(x+h,y+k,7);
      if(d<0)
      d=d+4*x+6;
      else
      {
          d=d+4*(x-y)+10;
          y--;
      }
      x++;
    }
    getch();
}
