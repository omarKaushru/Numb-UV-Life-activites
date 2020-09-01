#include <stdio.h>
int main()
{
    int a[50],n,i,j,temp,cs,k=0,sum=0;
    printf("Enter the capacity of ship: ");
    scanf("%d",&cs);
    printf("Enter the number of container: ");
    scanf("%d",&n);
    printf("Enter the weight of the containers : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++)    /* First sort the weight for sorting here I used selection sort method*/
    {
        for(j = i+1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i]   = a[j];
                a[j] = temp;
            }
        }
    }
    
  while(sum<=cs)
   {
       sum=sum+a[i];
        i++;
		k=k+1;
   }
   printf("\nBest case for choose container based on theier weight are");
   printf("\n");
   for(i = 0; i <=k; i++)
    {
    printf("%d ",a[i]);
    }
    return 0;
}
