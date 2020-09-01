///Accepted... Plz try with java..
#include <bits/stdc++.h>
using namespace std;
#define CLR(a) memset(a,0,sizeof(a))
int main()
{
    int n,i,num,count[10],temp;
    cin>>n;
    while(n--)
    {
        cin>>num;
        CLR(count);
        for(i=1; i<=num; i++)
        {
            temp=i;
            while(temp)
            {
                count[temp%10]++;
                temp=temp/10;
            }
        }
        for(i=0; i<=9; i++)
        {
            if(i!=0)
            cout<<" ";
            cout<<count[i];
        }
        cout<<endl;
    }
    return 0;
}
