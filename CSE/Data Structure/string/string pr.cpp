/**
 ****************************************************|
 * String replace Program                            |
 ****************************************************|
 * Takes three string input from the user
 * Replaces all the occurances of the second string
 * with the third string from the first string
 * @author Swashata
 */

/** Include Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/** Define the max char length */
#define MAX_L 4096

/** Prototypes */
void replace (char *, char *, char *);

int main(void) {
    char o_string[MAX_L], s_string[MAX_L], r_string[MAX_L]; //String storing variables

	printf("Please enter the original string (max length %d characters): ", MAX_L);
	fflush(stdin);
	gets(o_string);

	printf("\nPlease enter the string to search (max length %d characters): ", MAX_L);
	fflush(stdin);
	gets(s_string);

	printf("\nPlease enter the replace string (max length %d characters): ", MAX_L);
	fflush(stdin);
	gets(r_string);

	printf("\n\nThe Original string\n*************************************\n");
	puts(o_string);

	replace(o_string, s_string, r_string);

	printf("\n\nThe replaced string\n*************************************\n");
	puts(o_string);

    getch();
}
