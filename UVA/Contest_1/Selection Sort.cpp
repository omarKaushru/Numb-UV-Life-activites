///Selection Sort by using function
#include <bits/stdc++.h>
using namespace std;
int array[100];
int Min(int *array, int low_bound, int up_bound)
{
    int min=low_bound;
    while(low_bound<up_bound)
    {
        if(array[low_bound]<array[min])
        min=low_bound;
        low_bound++;
    }
    return min;
}
void selection_sort(int *array,int n)
{
    int i=0,loc=0,temp=0;
    for(i=0; i<n; i++)
    {
        loc=Min(array,i,n);
        temp=array[loc];
        array[loc]=array[i];
        array[i]=temp;
    }
}
int main()
{
    int n,i;
    cin>>n;
    for(i=0; i<n; i++)
    cin>>array[i];
    selection_sort(array,n);
    for(i=0; i<n; i++)
    cout<<array[i]<<" ";
    return 0;
}
