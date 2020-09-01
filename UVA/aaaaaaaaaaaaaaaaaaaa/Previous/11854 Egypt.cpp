///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int sum1,sum2,a[5];
    while(cin>>a[0]>>a[1]>>a[2])
    {
        if(!(a[0]+a[1]+a[2]))
        break;
        sort(a,a+3);
        sum1=a[2]*a[2];
        sum2=a[1]*a[1]+a[0]*a[0];
        if(sum1==sum2)
        cout<<"right"<<endl;
        else
        cout<<"wrong"<<endl;
    }
}
