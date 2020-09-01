///Accepted

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp,remainder,sum=0;

    while(cin>>n &&n)
    {
        temp=n;
        while(1)
        {
            remainder=temp%10;
            sum=sum+remainder;
            temp=temp/10;
            if(temp==0 && sum>9)
            {
                temp=sum;
                sum=0;
            }
            else if(temp==0 && sum<=9)
            break;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
