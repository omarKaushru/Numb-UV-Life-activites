#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main(){
    initwindow(800,600);
    line(300,100,300,200);
    line(300,200,400,150);
    line(400,150,300,100);
    line(200,125,300,125);
    line(200,175,300,175);
    line(400,100,400,200);
    line(400,150,500,150);
    getch();
    closegraph();
    return 0;
}
