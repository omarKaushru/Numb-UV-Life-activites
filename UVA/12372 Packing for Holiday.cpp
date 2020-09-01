///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l,h,w,intial_length,cal,t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        intial_length=20*20*20;
        cin>>l>>h>>w;
        cal=l*h*w;
        if((cal<=intial_length) && (l<=20 && h<=20 && w<=20))
        cout<<"Case "<<i<<": "<<"good"<<endl;
        else
        cout<<"Case "<<i<<": "<<"bad"<<endl;
    }
}
