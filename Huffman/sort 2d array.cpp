#include<stdio.h>
#include<conio.h>

int main( )
{

    int a[][6]={
                {25,64,96,32,78,27},      //Desired solution : {25,27,32,64,78,96},
                {50,12,69,78,32,92}       //                   {50,92,78,12,32,69}
                };
     int i, j, k, temp, temp1 ;

    //Bubble sorting is applieed on one first row while the other row is swapped

     for(j=1;j<6;j++)
     {
          for(i=0; i<5; i++)
          {
                if(a[0][i]>a[0][i+1])
                {
                    temp=a[0][i];
                    a[0][i]=a[0][i+1];
                    a[0][i+1]=temp;

                    temp1 = a[1][i];
                    a[1][i] = a[1][i+1];
                    a[1][i+1]=temp1;
                }
          }
     }

     printf ( "\n\nArray after sorting:\n") ;
     for ( i = 0 ; i <2; i++ )
     {
        for(j=0; j<6; j++)
        {
            printf ( "%d\t", a[i][j] ) ;        //printing sorted array
        }
        printf("\n");
     }
     getch();
}
