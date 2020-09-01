///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j=7,c=0;
    for(i=1; i<=9;)
    {
        c++;
        cout<<"I="<<i<<" J="<<j<<endl;
        j--;
        if(c==3)
        {
            i=i+2;
            j=j+5;
            c=0;
        }
    }
    return 0;
}
