#include<iostream>
using namespace std;
int main()
{
    int data[100],ptr,k,temp,n;
    cout<<"Enter the number of elemnt:";
    cin>>n;
    cout<<"Enter the elements :";
    for(k=1;k<=n;k++)
    cin>>data[k];
    for(k=1; k<=n-1; k++)
    {
        ptr=1; /* Initializes pass pointer that means pass1: */
        while(ptr<=n-k)            /* Executes pass */
        {
            if(data[ptr]>data[ptr+1])
            {
                temp=data[ptr];
                data[ptr]=data[ptr+1];     /* Interchange */
                data[ptr+1]=temp;
            }  /* End of if structure */
           ptr=ptr+1;
        } /* End of while loop */
    }   /* End of for loop */
    cout<<"After sorting"<<endl;
    for(ptr=1; ptr<=n; ptr++)
    cout<<data[ptr]<<' ';
    return 0;
}
