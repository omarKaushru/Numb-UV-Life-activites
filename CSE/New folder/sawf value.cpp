#include<stdio.h>
#include<conio.h>
main() 
{ 
    int x,y; 
    printf("\nPlease Enter a Number (x):"); 
    scanf("%d",&x); 
    printf("\nPlease Enter a Number (y):"); 
    scanf("%d",&y); 
    printf("\n\nValues Before Swapping\nx=[%d]\ny=[%d]",x,y); 
    x=x+y; 
    y=x-y; 
    x=x-y; 
    printf("\n\nValues After Swapping\nx=[%d]\ny=[%d]",x,y); 
    getch(); 
}  
