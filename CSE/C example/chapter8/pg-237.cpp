#include<stdio.h>
#include<conio.h>
main(){
	char country[15] = "United Kingdom";
	printf("\n\n");
	printf("*123456789012345*\n");
	printf("-------------\n");
	printf("%15s\n", country);
	printf("%5s\n", country);
	printf("%15.6\n", country);
	printf("%-15.6\n", country);
	printf("%15.0\n", country);
	printf("%.3s\n", country);
	printf("%s\n", country);
	printf("-------------\n");
	getch();
}
