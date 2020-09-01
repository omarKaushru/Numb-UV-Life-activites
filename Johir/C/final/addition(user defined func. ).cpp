
#include <stdio.h>
#include <conio.h>
  int input();
  int inpu();
  int sum(int x,int y);
main()
   {
	int c,d,e;
	c=input();  
     d=inpu(); 
      e=sum(c,d);  

	getch();  
    }
        
int input()
{   int n;
    printf("Enter 1st integer number :\n");
    scanf("%d",&n);
    return n;       }
 
int inpu()
{   int n;
    printf("Enter 2nd integer number :\n");
    scanf("%d",&n);
    return n;       }
    
int sum(int x,int y)
{   int z;
    z=x+y;
    printf("Result of addition =%d",z);  }
