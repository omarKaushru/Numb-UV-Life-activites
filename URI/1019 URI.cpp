#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int input, hour, minute, temp;
    while(cin>>input)
    {
        hour=input/3600;
        temp=input%3600;
        minute=temp/60;
        temp=temp%60;
        printf("%ld:%ld:%ld\n",hour,minute,temp);
    }
    return 0;
}
