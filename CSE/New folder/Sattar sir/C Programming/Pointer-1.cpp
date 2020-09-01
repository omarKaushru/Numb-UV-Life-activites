#include <stdio.h>
#include <conio.h>

main()
{
    int *ptr, i;
	i = 11;  
    printf("\n Value of i:%d",i); 
    printf("\n Address of i:%d",&i);
    
    /* address of i is assigned to ptr */
	ptr = &i;   
	
	/* show i's value using ptr variable */  
	printf("\n Value of ptr : %d", ptr); 
    printf("\n Pointer of ptr : %d", *ptr);   
	getch();
}
