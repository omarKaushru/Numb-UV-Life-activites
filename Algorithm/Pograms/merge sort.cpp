#include<stdio.h>
#include<conio.h>

void mergesort(int arr[],int low,int high);
void merge(int arr[],int low,int mid,int high);

int main()
{
 int a[30];
 int i,n;
 printf("Enter total no. of elements : ");
 scanf("%d",&n);
 for(i=1; i<=n; i++)
 {
   printf("Enter %d element : ",i);
   scanf("%d",&a[i]);
 }
 mergesort(a,1,n);
 printf("\n\t------- Merge sorted elements -------\n\n");
 for(i=1; i<=n; i++)
 printf("%d ",a[i]);
 return 0;
}


void mergesort(int a[],int low,int high)
{
 int mid;
 if(low<high)
 {
   mid=(low+high)/2;
   mergesort(a,low,mid);
   mergesort(a,mid+1,high);
   merge(a,low,mid,high);
 }
}


void merge(int a[],int low,int mid,int high)
{
  int tmp[30];
  int i,j,k,m; 
  j=low;
  m=mid+1;
  for(i=low; j<=mid && m<=high ; i++)
  {
     if(a[j]<=a[m])
     {
         tmp[i]=a[j];
         j++;
     }
     else
     {
         tmp[i]=a[m];
         m++;
     }
  }
  if(j>mid)
  {
     for(k=m; k<=high; k++)
     {
         tmp[i]=a[k];
         i++;
     }
  }
  else
  {
     for(k=j; k<=mid; k++)
     {
        tmp[i]=a[k];
        i++;
     }
  }
  for(k=low; k<=high; k++)
     a[k]=tmp[k];
}
