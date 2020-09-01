#include<stdio.h>
#include<conio.h>
#include<cstring>
struct record
{
	char author[20];
	char title[30];
	float price;
	struct
	{
		char month[10];
		int year;
	}
	date;
	char publisher[10];
	int quantity;
};
int look_up(struct record table[], char s1[], char s2[], int m);
void get(char string[]);
main(){
	char title[30], author[20];
	int index, no_of_records;
	char response[10], quantity[10];
	struct record book[] = {
		{"Ritche","C Language", 45.00, "May",1977, "PHI",10},
		{"Kochan","Programing in C", 75.50, "July", 1983, "Hayden",5},
		{"Balagurusamy", "BASIC",30.00,"January",1984,"TMH",0},
		{"Balagurusamy", "COBOL",60.00,"December",1988,"Macmillan",25}
	};
	no_of_records = sizeof(book)/sizeof(struct record);
	do
	{
		printf("Enter title and author name as per the list\n");
		printf("\nTitle:		");
		get(title);
		printf("Author:			");
		get(author);
		index = look_up(book, title, author, no_of_records);
		if(index != -1)
		{
			printf("\n%s %s %.2f %s %d %s\n\n",
	   	    book[index].author, 
		    book[index].title, 
			book[index].price,
			book[index].date.month, 
			book[index].date.year, 
			book[index].publisher);
			
			printf("Enter number of copies: ");
			get(quantity);
			if( atoi(quantity) < book[index].quantity)
			
			printf("Cost of %d copies = %.2f\n", atoi(quantity),
			 book[index].price*atoi(quantity));
			else
			printf("\nRequired copies not in stock\n\n");
		}
		else
		 printf("\nDo you want any other book?(YES/NO):");
		 get(response);
	}
	while(response[0] == 'Y'|| response[0] == 'y');
	printf("\n\nThank You. Good Bye!\n");
}
void get(char string[])
{
	char c;
	int i = 0;
	do
	{
		c=getchar();
		string[i++] = c;
	}
	while(c != '\n');
	string[i-1] = '\0';
}
int look_up(struct record table[], char s1[], char s2[], int m)
{
	int i;
	for(i=0; i<m; i++)
	if(strcmp(s1, table[i].title)==0 && strcmp(s2, table[i].author)==0)
	return(i);
	return(-1);
}
