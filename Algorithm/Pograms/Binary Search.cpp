#include<stdio.h>
int main(){
    int data[20],i,n,item,lb=1,ub,mid,beg,end,loc;
    printf("Enter the number of Elemnt:");
    scanf("%d",&n);
    printf("Enter the elements in ascending order: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&data[i]);
    }
    printf("Enter the number to be search: ");
    scanf("%d",&item);
    ub=n; beg=lb, end=ub,mid=int((beg+end)/2);
    while(beg<=end && data[mid]!=item){
         if(item<data[mid])
         {
            end=mid-1;
         }
         else
         {
             beg=mid+1;
         }
        mid=int((beg+end)/2);
    }
    if(data[mid]==item)
    {
        loc=mid;
        printf("Location %d:",loc);
    }
    else
    {
        loc=NULL;
        printf("Item not found");
    }
    return 0;
}
