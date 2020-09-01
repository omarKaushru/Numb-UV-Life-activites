#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main(){
    initwindow(800,600);
    line(100,100,400,100);
    line(400,100,400,300);
    line(400,300,100,300);
    line(100,300,100,100);
    line(100,300,100,500);
    line(95,100,95,500);
    circle(250,200,50);
    getch();
    closegraph();
    return 0;
}
    
