#include<iostream>
#include<math.h>
#include<stdio.h>
#include<graphics.h>
using namespace std;
int main()
{
    initwindow(800,800);
    int x1,y1,x2,y2,i,j;
    double x,y,m;
    cin>>x1>>y1>>x2>>y2;
    m=(y2-y1)/double(x2-x1);
    if(m<=1)
    {
      y=y1;
      for(i=x1; i<=x2; i++)
      {
        j=floor(y+0.5);
        putpixel(i,j,7);
        y=y+m;
      }///end of for loop
    }//end of if
    else
    {
        x=x1;
        for(j=y1; j<=y2; j++)
        {
          i=floor(x+.05);
          putpixel(i,j,7);
          x=x+(1/m);
        }
    }
    getch();
}
