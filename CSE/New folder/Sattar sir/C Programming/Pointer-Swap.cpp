#include <stdio.h>
#include <conio.h>

void swap(int * q,int * p)
{
  int temp = *p;
  *p = *q; 
  *q = temp;
}

main()
{
  int a = 10, b = 2;
  swap(&a, &b);
  printf("\n a:%d",a);
  printf("\n b:%d",b);
  getch();
} 
