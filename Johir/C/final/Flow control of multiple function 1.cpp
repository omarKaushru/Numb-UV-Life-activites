#include <stdio.h>
#include <conio.h>
int Add(int x,int y);
void display(int x);
main()
     {
      int x,y,z;
      printf("Enter value for x:");
      scanf("%d",&x);
      printf("Enter value for y:");
      scanf("%d",&y);
      z=Add(x,y);
      display(z);
        getch();
            }
            int Add(int x,int y){
                int a;
                a=x+y;
                return a;
                }
            void display(int x){
             printf("\n\nThe addition is:%d",x);
                }
