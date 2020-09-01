#include <iostream>
using namespace std;
int main()
{
    int a[10001],min=9999999,i,n;
    cout<<"Enter the number of element: ";
    cin>>n;
    cout<<"Enter the elements: \n";
    for(i=0; i<n; i++)
    cin>>a[i];

    for(i=0; i<n; i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    cout<<"Minimum number is :"<<min<<endl;
    return 0;
}
