#include<stdio.h>
#include<conio.h>
int *selectionSort(int array[],int n)
{
    int j,temp,i;
    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
     {
     if(array[i]>array[j])
     {
     temp=array[i];
     array[i]=array[j];
     array[j]=temp;
     }
     }
     }
     return array;
                          
     }
main()
{
    int array[1000],n,i;
    printf("Enter the number of element");
    scanf("%d",&n);
    printf("Enter Elements in the list:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&array[i]);
    }
    int *sortArray=selectionSort(array,n);
    printf("Sorted list:");
    for(i=0;i<n;i++)
    {
    printf("%d\t",sortArray[i]);
    }
    getch();
    }
                    
