#include <winbgim.h>

void waitForLeftMouseClick();

int main()
{
    initwindow(400,300); //open a 400x300 graphics window
    
    // delete these lines and replace them with your own code:
    settextstyle(0,0,2);
    setcolor(RED);
    outtextxy(20,100,"Welcome to C++ graphics!");
    setcolor(GREEN);
    outtextxy(60,130,"Click this window");
    outtextxy(120,160,"to exit.");
    
                
    // while(!kbhit());     // wait for user to press a key
    waitForLeftMouseClick(); // use one or the other of these--not both


    closegraph();        //close graphics window
	return 0;
}

void waitForLeftMouseClick()
{
    clearmouseclick(WM_LBUTTONDOWN);
    const int DELAY = 50; // Milliseconds of delay between checks
    int x, y;
    while (!ismouseclick(WM_LBUTTONDOWN))
        delay(DELAY);
    getmouseclick(WM_LBUTTONDOWN, x, y);
}
