#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

main ()
{
	char line[150]; 	
	int i, vowel,consonants,digits,spaces,dots;
	vowel=consonants=digits=spaces=dots=0;

	printf("\n Enter a line of string: "); 
	gets(line); 
	
	for(i=0;line[i]!='\0';++i) 
		{ 
			if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' 
				|| line[i]=='I' || line[i]=='O' || line[i]=='U') 
				++vowel; 
			else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z')) 
				++consonants; 
			else if(line[i]>='0'&& consonants<='9') 
				++digits; 
			else if (line[i]==' ') 
				++spaces; 
			else if (line[i]=='.') 
				++dots; 
		} 
	printf("\n Vowels: %d",vowel); 
	printf("\n Consonants: %d",consonants); 
	printf("\n Digits: %d",digits);  
	printf("\n White spaces: %d",spaces); 
	printf("\n Total Dots: %d",dots); 
   getch();
}
