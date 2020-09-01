#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,c1,c2;

    while(cin>>n)
    {
        c1=0,c2=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x>=10 && x<=20)
            c1++;
            else
            c2++;
        }
        cout<<c1<<" in\n"<<c2<<" out\n";
    }
}
