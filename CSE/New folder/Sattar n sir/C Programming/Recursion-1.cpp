#include<stdio.h>
#include<conio.h>
int sum(int n);

int main()
	{ 
	int num,add; 
	printf("\n Enter a positive integer: ");  
	scanf("%d",&num); 
	add=sum(num); 
	printf("\n Sum=%d",add); 
	} 

int sum(int n)
	{ 
		if(n!=0) 
			return n+sum(n-1);
		else 
			return n; 
	}
