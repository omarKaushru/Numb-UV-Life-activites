#include <stdio.h>
#include <conio.h>
main() {
char str[100];
int length;
printf("\nEnter the String :");
gets(str);
length = 0;  // Initial Length
while (str[length] != '\0')
length++;
printf("\nLength of the String is : %d", length);
getch();
}
