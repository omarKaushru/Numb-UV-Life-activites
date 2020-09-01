#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int u[20],a[20],a_prime[20];
    int i,j,flag, nu, na;
    cout<<"Enter the number of element of Universal set: ";
    cin>>nu;
    cout<<"Enter the elements :";
    for(i=0; i<nu; i++)
    cin>>u[i];
    cout<<"Enter the number of element of Set A: ";
    cin>>na;
    cout<<"Enter the elements :";
    for(i=0; i<na; i++)
    cin>>a[i];
    sort(u, u+nu); ///Sorting the elements of Universal Set
    sort(a, a+na); ///Sorting the elements of A
    int k=0;
    for(i=0; i<nu; i++)
    {
        flag=0;
        for(j=i; j<na; j++)
        {
            if(u[i]==a[j])
            {
                flag=1;
                break;
            }
        }
        if(flag!=1)
        {
            a_prime[k]=u[i];
            k++;
        }
    }

    for(i=0; i<k; i++)
    cout<<a_prime[i]<<" ";
    return 0;
}
