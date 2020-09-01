#include<stdio.h>
#include<conio.h>

main()
{
    int a[20],n,i,max=0;  // declared the array a with size  20


    printf("\n Enter  the number of elements for 1-D array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter element [%d] : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }

    printf("\n Greatest element from above array inserted is : %d",max);

    getch();
}

    
