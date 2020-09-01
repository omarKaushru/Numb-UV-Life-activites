///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j=7;
    for(i=1; i<=9;)
    {
        cout<<"I="<<i<<" J="<<j<<endl;
        j--;
        if(j==4)
        {
            i=i+2;
            j=7;
        }
    }
    return 0;
}
