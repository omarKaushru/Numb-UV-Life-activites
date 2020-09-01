///Remember code has its own beauty so you should beautify it.
#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    long long a , n;
    bool f;
    f=true;
    cin >> a ;
    if(a==1 || a==0)
    f=false;
    else
    {
        n=sqrt(a);
        for(int i = 2 ; i<=n ; i++)
        {
                if(a%i==0)
                {
                    f=false ;
                    break;
                }
        }
    }
    if (f)
    cout<<a<<" is a prime number"<<endl ;
    else
    cout<<a<<" is not a prime number"<<endl ;
    return 0;
}
