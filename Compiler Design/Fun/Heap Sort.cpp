/* C++ Program to implement Heap Sort */

#include <iostream>
using namespace std;

void MAX_HEAPIFY(int a[], int i, int n)
{
    int l,r,largest,loc;
    l=2*i;
    r=(2*i+1);
    if((l<=n)&&a[l]>a[i])
       largest=l;
    else
       largest=i;
    if((r<=n)&&(a[r]>a[largest]))
       largest=r;
    if(largest!=i)
    {
         loc=a[i];
         a[i]=a[largest];
         a[largest]=loc;
         MAX_HEAPIFY(a, largest,n);
    }
}
void BUILD_MAX_HEAP(int a[], int n)
{
    for(int k = n/2; k >= 1; k--)
    {
        MAX_HEAPIFY(a, k, n);
    }
}
void HEAPSORT(int a[], int n)
{

    BUILD_MAX_HEAP(a,n);
    int i, temp;
    for (i = n; i >= 2; i--)
    {
        temp = a[i];
        a[i] = a[1];
        a[1] = temp;
        MAX_HEAPIFY(a, 1, i - 1);
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the array"<<endl;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    HEAPSORT(a, n);
    cout<<":::::::SORTED FORM::::::"<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}

/* A sorting algorithm that works by first organizing the data to be sorted
into a special type of binary tree called a heap. The heap itself has, by definition,
the largest value at the top of the tree, so the heap sort algorithm must also reverse the order.
It does this with the following steps:

1. Remove the topmost item (the largest) and replace it with the rightmost leaf.
The topmost item is stored in an array.

 2. Re-establish the heap.

 3. Repeat steps 1 and 2 until there are no more items left in the heap.
 The sorted elements are now stored in an array
 */
