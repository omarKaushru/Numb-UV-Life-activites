#include<stdio.h>
#include<conio.h>
main()
{
      int MatrixA[9][9] , MatrixB[9][9] , MatrixC[9][9] ;

      int n , i , j , k;                              /* 'i' used for rows and 'j' used for columns */

      int Row1 , Row2 , Column1 , Column2;

      printf(" Enter the order of Matrix A\n");
      scanf("%d * %d " , &Row1 , &Column1);

      printf(" Enter the order of Matrix B\n");
      scanf("%d * %d " , &Row2 , &Column2);

      if(Column1 == Row2)
                 {
                  printf(" Enter the elements of Matrix A\n");
                  for(i=0 ; i<Row1 ; i++)
                  {
                          for(j=0 ; j<Column1 ; j++)
                          {
                          scanf("%d" , &MatrixA[i][j] );
                          }
                  }

                  printf(" Enter the elements of Matrix B\n");
                  for(i=0 ; i<Row2 ; i++)
                  {
                          for(j=0 ; j<Column2 ; j++)
                          	{
                           scanf("%d" , &MatrixB[i][j] );
                           	}
                  }

                                                     /* Product of two Matrices */


         for(i=0 ; i<Row1 ; i++)
         {
                 for(j=0 ; j<Column2 ; j++)
                 {
                  MatrixC[i][j] = 0 ;
                  for(k=0 ; k<Row2 ; k++)
                          {
                           MatrixC[i][j] = MatrixC[i][j] + ( MatrixA[i][k] * MatrixB[k][j] );
                           }
                  }
         }

         printf(" Product Matrix\n");
         for(i=0 ; i< Row1 ; i++)
         {
         for(j=0 ;j< Column2;j++)
                 {
                  printf("%d" , MatrixC[i][j] );
                  }
                  printf("\n");
         }

         }                                                                    /* End of if */

         else
         {
          printf(" Invalid order so Multiplication not possible\n");
          }
}
