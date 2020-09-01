#include<stdio.h>
#include<conio.h>
#include<math.h>
#define ROW 8
#define COL 256
int main()
{
  int i,j,k,num,temp,flag;
  int table[COL][ROW]={0};
  char set[ROW][20];
//  clrscr();
  printf("\nEnter the number of set elements: ");
  scanf("%d",&num);
  printf("\nEnter any %d elements:\n",num);
  for(i=0;i<num;i++)
  {
    fflush(stdin);
    gets(set[i]);

  }
  for(i=0;i<pow(2,num);i++)
  {
    temp=i;
    for(j=0;j<num;j++)
    {
      table[i][j]=temp%2;
      temp=temp/2;
    }
  }
  printf("\nThe power set is:\n\n");
  for(i=0;i<pow(2,num);i++)
  {
    printf("\n\n{");
    for(j=0;j<num;j++)
    {
      flag=0;
      if(table[i][j]==1)
      {
    for(k=j+1;k<num;k++)
      if(table[i][k]==1)
        flag=1;
    if(flag==1)
      printf(" %s ,",set[j]);
    else
      printf(" %s  ",set[j]);
      }
    }
    printf("}");
  }
  getch();

}
