#include <graphics>
#include <conio.h>
#include <iostream>
int main( )
{
    initwindow(800, 800, "First Sample");
    int points[]={100,150,300,150,300,400,250,400,100,150};
    setfillstyle(1,4); // 1-Pattern, 4-Color
    fillpoly(5,points);
    
   
   getch();
   closegraph();
   return 0;
}
 
 
