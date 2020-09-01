#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main(){
    initwindow(800,600);
    circle(300,200,80);
    line(300,150,300,250);
    line(300,180,360,150);
    line(300,225,360,250);
    line(360,150,360,100);
    line(360,250,360,300);
    line(200,200,300,200);                       
    getch();
    closegraph();
    return 0;
}
