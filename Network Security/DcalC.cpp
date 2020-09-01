///Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long p2,p1,m,piN,publicKey,d;
    while(cin>>p1>>p2>>publicKey)
    {
        piN=(p1-1)*(p2-1);
        while(true)
        {
            if((piN+1)%publicKey==0)
            {
                d=(piN+1)/publicKey;
            }
            else
            {
                piN=piN*2;
                if((piN+1)%publicKey==0)
                {
                    d=(piN+1)/publicKey;
                }
            }
        if((piN+1)%publicKey==0)
        break;
    }
    cout<<d<<endl;
    }
    return 0;
}
