///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,j=0,max=-1;
    for(int i=1; i<=100; i++)
    {
        cin>>n;
        if(n>max)
        {
            max=n;
            j=i;
        }
    }
    cout<<max<<"\n"<<j<<endl;
}
