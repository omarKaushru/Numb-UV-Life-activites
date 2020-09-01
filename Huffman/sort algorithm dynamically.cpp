#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;
main(){
       int arr[55], i,n;
       cout<<"Enter the number of elements:";
       cin>>n;
       
       for(i=0; i<n; i++){
       cout<<endl<<"Enter the emelent["<<i<<"] :";
       cin>>arr[i];
       }
       for(i=0; i<n; i++){
       cout<<arr[i]<<" ";
       }
       cout<<endl<<"\n\t\tAfter Sort"<<endl<<endl;
       sort(arr, arr+n);
       for(i=0; i<n; i++){
       cout<<arr[i]<<" ";
       } 
       cout<<endl;
       getch();
}
