#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

main ()
{
	char str1[12];
	char str2[12];
    char str3[12];
    int  len ;

	printf("\n\t Enter your First String : ");
	gets(str1);
	
	printf("\n\t Enter your 2nd String : ");
	gets(str2);
	
	if(strcmp(str1,str2)==0)
		printf("\n\n\t strcmp(str1,str2):Both String are Equal");
	else
		printf("\n\n\t strcmp(str1,str2): String are not Equal");
		
		
   /* total lenghth of str1*/
   len = strlen(str1); 
   printf("\n\n\t strlen(str1) :  %d", len );
   
    /* convert str1 to lower case */
   strlwr(str1);
   printf("\n\n\t strlwr(str1): %s",str1);
   
    /* convert str1 to Uper case */
   strupr(str1); 
   printf("\n\n\t strupr(str1): %s",str1);
   
   /* reverse of str1 */
   strrev(str1);
   printf("\n\n\t strrev(str1): %s",str1);
      
   /* copy str1 into str3 */
   strcpy(str3, str1);
   printf("\n\n\t strcpy( str3, str1) :  %s", str3 );
   
    /* concatenates str1 and str2 */
   strcat( str1, str2);
   printf("\n\n\t strcat( str1, str2):   %s", str1 );

   getch();
}
