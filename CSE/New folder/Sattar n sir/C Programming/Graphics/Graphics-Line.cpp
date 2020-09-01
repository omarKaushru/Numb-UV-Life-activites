#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include <dos.h>
#include <stdlib.h>
main()
{
   initwindow(800,600);    
   
   int i, grd, grm;
      //detectgraph(&grd,&grm);
      //initgraph(&grd, &grm, "");
 
 
      while(!kbhit())
      {
            //randomize();
            setbkcolor(BLUE);
            setfillstyle(SOLID_FILL, BLUE);
            bar(1,1,638,478);
            setcolor(WHITE);
            rectangle(0,0,800,600);
 
            for(i = 0; i < 300; i++)
            {
                  setcolor(rand() % 10);
                  circle(rand() % 640, rand() % 480, rand() % 25);
                  delay(1);
            }
 
      }
 
      getch();
      closegraph();
}
