///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t,c=1;
   cin>>t;
   while(t--)
   {
       int pos=1,num,n,i;
       cin>>n;
       for(i=1;i<=n;i++)
       {
           cin>>num;
           if(num==pos)
           pos++;
       }
       //cout<<" pos "<<pos<<endl;
       cout<<"Case "<<c++<<": "<<n-pos+1<<endl;
   }
}
