#include <bits/stdc++.h>
using namespace std;

int main()
{

    char a,b,i=1;
    while(cin>>a)
    {
        b=a+i;
        cout<<b<<endl;
        i++;
        if(i==26)
        i=0;
    }

}
