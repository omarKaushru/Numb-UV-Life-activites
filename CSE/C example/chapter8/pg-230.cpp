#include<stdio.h>
#include<conio.h>
main(){
	char word1[40], word2[40], word3[30], word4[40];
	printf("Enter text: \n");
	scanf("%s %s %s %s", &word1, &word2, &word3, &word4);
	
	printf("\n");
	printf("word1 = %s\nword2 = %s\n", word1, word2);
	printf("word3 = %s\nword4 = %s\n", word3, word4);
	
	getch();
}
