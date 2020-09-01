#include<stdio.h>
#include<conio.h>

int main()
{
     int mat[20];
     int s,max;
     printf("\nSize of your Array is : ");
     scanf("%d",&s);
     printf("\nEnter your %d element of an array : \n", s);

     for(int i=0;i<s;i++)
     {
          scanf("%d",&mat[i]);
     }
     max=mat[0];

     for(int i=1;i<s;i++)
     {
          if(max < mat[i])
          max = mat[i];
     }

     printf("\nmaximum value element from given %d element is : %d",s,max);
     getch();
}
