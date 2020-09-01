///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    float a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(b==0)
        cout<<"divisao impossivel\n";
        else
        printf("%.1f\n",(a/b));
    }
}
