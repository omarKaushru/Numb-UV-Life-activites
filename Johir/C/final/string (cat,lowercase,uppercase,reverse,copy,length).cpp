#include <stdio.h>
#include <string.h>
#include <conio.h>
main()
{
char str1[12] = "Johir";
char str2[12] = "robel";
char str3[12];
int len ;
strcpy(str3, str1);
printf("\n strcpy( str3, str1) : %s", str3 );
strcat( str1, str2);
printf("\n strcat( str1, str2): %s", str1 );
len = strlen(str1);
printf("\n strlen(str1) : %d ", len );
strlwr(str2);
printf("\n strlwr(str2) : %s ", str2 );
strupr(str2);
printf("\n strupr(str2) : %s ", str2 );
strrev(str2);
printf("\n strrev(str2) :%s",str2);
getch();
}
