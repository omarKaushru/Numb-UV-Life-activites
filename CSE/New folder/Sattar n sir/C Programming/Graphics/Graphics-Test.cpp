
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    initwindow(800,600);    
   // Create an image
	HEZDIMAGE hDib = ezd_create( 640, -480, 24 );

	// Fill in the background with a dark gray color
	ezd_fill( hDib, 0x606060 );
	
	// Save a test image
	ezd_save( hDib, "test.bmp" );

	// Free resources
	ezd_destroy( hDib );
   
   // Draw random green line
	ezd_line( hDib, 100, 100, 200, 200, 0x00ff00 );

	// Random yellow box
	ezd_fill_rect( hDib, 300, 200, 350, 280, 0xffff00 );

	// Draw random white dot
	ezd_set_pixel( hDib, 50, 50, 0xffffff );

	// Rectangle
	ezd_rect( hDib, 50, 50, 100, 100, 0x000000 );

	// Circle
	ezd_circle( hDib, 100, 100, 10, 0x000000 );

	// Fill the circle
	ezd_flood_fill( hDib, 100, 100, 0x000000, 0x808080 );
    getch();  
    closegraph();   
    return 0; 
}




 




