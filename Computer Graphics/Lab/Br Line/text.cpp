#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    initwindow(800,800);
    int x,y,d,dx,dy,x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    x=x1;
    y=y1;
    dx=x2-x1;
    dy=y2-y1;
    d=2*dy-dx;
    putpixel(x,y,7);
    while(x<x2)
    {
      x++;
      if(d<0)
      d=d+2*dy;
      else
      {
          y++;
          d=d+2*(dy-dx);
      }
      putpixel(x,y,7);
    }
    getch();
}
