#include <stdio.h>
#include <conio.h>
int swap(int x,int y);
int swap1(int x,int y);
main()
    {
	int a,b,c,s,s1;
	printf("Enter  value of a : ");
	scanf("%d", &a);
	printf("Enter  value of b : ");
	scanf("%d", &b);
    s=swap(a,b);s1=swap1(a,b);
	printf("\n a=%d", s);
	printf("\n b=%d", s1);
	getch();
    }
    int swap(int x,int y)
    { int z;
         z=x+y;
       x=z-x;
       return x;   }
    int swap1(int x,int y)
    { int z;
          z=x+y;
        y=z-y;
        return y;  }
