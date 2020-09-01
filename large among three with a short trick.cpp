#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three integer:";
    cin>>a>>b>>c;
    if(a>b && a>c)
    cout<<"Among this three intger larger is:"<<a;
    else if(b>c)
    cout<<"Among this three intger larger is:"<<b;
    else
    cout<<"Among this three intger larger is:"<<c;
    return 0;
}
