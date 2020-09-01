#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
 char a[3][3];
 int i,n,k,l,m,p,c,j,o=0;

// clrscr();

 for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      a[i][j]='  ';
    }
 for(i=0;i<5;i++)
    {

    printf("ur turn:\n");
    printf("enter in b/w 0 to 8:");
    scanf("%d",&p);
    k=p/3;
    l=p%3;


    while(1)
       {
         if(a[k][l]!=' ')
                   {
                printf(" the given address is already filed enter any other no.:");
                scanf("%d",&p);
                k=p/3;
                l=p%3;
                   }
         else
         break;
       }

    a[k][l]='x';
    o++;

    if(o>=5 && o<=9)
           {if(((a[0][0]==a[0][1] && a[0][0]==a[0][2] && a[0][0]=='x') || (a[1][0]==a[1][1] && a[1][0]==a[1][2] && a[1][0]=='x') || ( a[2][0]==a[2][1] && a[2][0]==a[2][2] && a[2][0]=='x') ||   ( a[0][0]==a[1][0] && a[0][0]==a[2][0] && a[2][0]=='x') ||(a[0][1]==a[1][1] && a[1][1]==a[2][1] && a[0][1]=='x')  ||(a[0][2]==a[1][2] && a[0][2]==a[2][2] && a[0][2]=='x') ||(a[0][0]==a[1][1] && a[0][0]==a[2][2] && a[2][2]=='x') ||(a[0][2]==a[1][1] && a[0][2]==a[2][0] && a[2][0]=='x')) )
                     {
                    for(i=0;i<3;i++)
                               {
                            for(j=0;j<3;j++)
                            printf("%c  ",a[i][j]);
                            printf("\n");

                               }

                    printf("\nu win:\n");

                    break;
                     }

           }

    if(o==9)
    {printf("\noverflow match tie:\n");
     break;
    }

//randomize();
c=rand()%9;

    m=c/3;
    n=c%3;
    while(1)
       { if(a[m][n]!=' ')
                { c=rand()%9;
                  m=c/3;
                  n=c%3;
                }
         else
         break;
       }

    o++;
    a[m][n]='0';




    if(o>=5 || o<=9)
    {if(((a[0][0]==a[0][1] && a[0][0]==a[0][2] && a[0][0]=='0') || (a[1][0]==a[1][1] && a[1][0]==a[1][2] && a[1][0]=='0') || ( a[2][0]==a[2][1] && a[2][0]==a[2][2] && a[2][0]=='0') ||   ( a[0][0]==a[1][0] && a[0][0]==a[2][0] && a[2][0]=='0') ||(a[0][1]==a[1][1] && a[1][1]==a[2][1] && a[0][1]=='0')  ||(a[0][2]==a[1][2] && a[1][2]==a[2][2] && a[0][2]=='0') ||(a[0][0]==a[1][1] && a[0][0]==a[2][2] && a[2][2]=='0') ||(a[0][2]==a[1][1] && a[0][2]==a[2][0] && a[2][0]=='0')) )
             {
                for(i=0;i<3;i++)
                        {for(j=0;j<3;j++)
                         printf("%c  ",a[i][j]);
                         printf("\n");

                        }
                printf("\ncomputer win:\n");
                break;
             }
    }

    for(i=0;i<3;i++)
            {
             for(j=0;j<3;j++)
             printf("%c  ",a[i][j]);

             printf("\n");
            }

 }

 printf("\n");

 for(i=0;i<3;i++)
         {for(j=0;j<3;j++)
          printf("%c  ",a[i][j]);
          printf("\n");
         }

 getch();
}
