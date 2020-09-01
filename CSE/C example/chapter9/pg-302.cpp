#include<stdio.h>
#include<conio.h>
void stat(void);
main(){
	int i;
	for(i=1; i<=3; i++)
	stat( );
	getch();
}
void stat(void)
{
	static int x = 0;
	
	x = x+1;
	printf("x = %d\n", x);
}
