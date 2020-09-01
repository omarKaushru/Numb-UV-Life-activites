#include <stdio.h>

void readCharsAndReverse(void);

int main (void)
{
    printf ("\n Give String to reverse: ");
    readCharsAndReverse();	
	return 0; 
}

void readCharsAndReverse(void)
{
    char ch;
    scanf ("%c", &ch);
    if (ch != '\n')
       readCharsAndReverse();
    printf ("%c", ch);
 } 
