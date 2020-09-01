#include <stdio.h>
#include<conio.h>
main()
{
     char Number;
     printf("Number: ");
     scanf("%c",&Number);
     
     switch(Number)
     {
        case '1' : printf( "Burger King\n" );
                   break;
        case '2' : printf( "McDonalds\n" );
                   break;
        case '3' : printf( "Wendy's\n" );
                   break;
        default  : printf( "No Such Number\n" );
                   break;
     }
     getch();
}
