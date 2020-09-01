#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n,year,month,days,temp;

    while(cin>>n)
    {
        year=n/365;
        temp=n%365;
        month=temp/30;
        days=temp%30;
        cout<<year<<" ano(s)\n"<<month<<" mes(es)\n"<<days<<" dia(s)\n";
    }
    return 0;
}
