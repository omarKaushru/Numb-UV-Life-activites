#include<iostream>
using namespace std;
int main(){
    int data[20],i,n,item,lb=1,ub,mid,beg,end,loc;
    cout<<"Enter the number of Elemnt:";
    cin>>n;
    cout<<"Enter the elements in ascending order:";
    for(i=1;i<=n;i++)
    cin>>data[i];
    cout<<"Enter the number to be search:";
    cin>>item;
    ub=n; beg=lb, end=ub,mid=int((beg+end)/2);
    while(beg<=end && data[mid]!=item)
	{
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
        cout<<"Location :"<<loc;
    }
    else
    {
        loc=NULL;
        cout<<"Item not found";
    }
    return 0;
}
