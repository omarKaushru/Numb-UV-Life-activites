#include <stdio.h>
#include <conio.h>
main()
{
	char str[100],s[100],r[100],ans[100];
	int i,j,c,m,k;
	printf("\nEnter a string \n");
	gets(str);	
	printf("\nEnter a search string \n");
	gets(s);	
	printf("\nEnter a replace string \n");
	gets(r);	
	i = m = c = j = 0;
	while ( str[c] != '\0')
	{
		if ( str[m] == s[i] ) // ...... matching
		{
			i++;
			m++;
		if ( s[i] == '\0') //.....found occ
		{
		//.... copy replace string in ans string .....
		for(k=0; r[k] != '\0';k++,j++)
			ans[j] = r[k];
		//	i=0;
			c=m;
		}
		}
		else //... mismatch
		{
			ans[j] = str[c];
			j++;
			c++;
			m = c;
		//	i=0;
		}
	}//while
	ans[j] = '\0';
	printf("\nThe resultant string is\n%s" ,ans);
	getch();
} // main
