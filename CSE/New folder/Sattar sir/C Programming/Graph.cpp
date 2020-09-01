#include<graphics.h>
#include<stdio.h>

int main(void)
{
   int gdriver = DETECT,gmode;
   int x1=200, y1=200;
   int x2=300, y2=300;

   initgraph(&gdriver, &gmode, "c:tcbgi");
   line(x1,y1,x2,y2);
   closegraph();
}
