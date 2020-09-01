#include<iostream>
using namespace std;
float Sum(float a, float n);
int main()
{
    float x,y,z;
    cin>>x>>y;
    z=Sum(x,y);
    cout<<z;
    return 0;
}
float Sum(float a, float n)
{
    float s=0.0;
    int i;
    for(i=1; i<=n; i++)
    {
        s=s+a;
    }
    return s;
}
