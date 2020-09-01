///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int fn,i,counter,a ,b ,c ,d ,L;
    while(cin>>a>>b>>c>>d>>L)
    {
        if(a==0 && b==0 && c==0 && d==0 && L==0)
        break;
        counter=0;
        for(i=0;i<=L;i++)
        {
            fn=(i*i*a)+(i*b)+c;
            if(fn%d==0)
            counter++;
        }
        cout<<counter<<endl;
    }
    return 0;
}
