/*
  Name: To know the number of word.
  Copyright: Numb.
  Author: Md. Omar Kaushru
  Date: 05/7/15 1:16 am.
  Description: It's will find out the number of word in a sentence or many sentence...
*/

#include <string.h>
#include <stdio.h>
int main()
{
   int i,c=1;
   char s[9999];
   printf("Enter one or more string:");
   gets(s);
        while(s[i]!='\0')
        {
        	if(s[i]==32)
        	c++;
        	i++;
        }
	printf("Number of words:%d",c);
return 0;
}
