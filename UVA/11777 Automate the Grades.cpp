///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int Term1, Term2, Final, Attendance, Class_Test1, Class_Test2, Class_Test3,sum;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>Term1>>Term2>>Final>>Attendance>>Class_Test1>>Class_Test2>>Class_Test3;
        sum=Term1+Term2+Final+Attendance;
        if(Class_Test1<=Class_Test2 && Class_Test1<=Class_Test3)
        sum=sum+((Class_Test2+Class_Test3)/2);
        else if(Class_Test2<=Class_Test3 && Class_Test2<=Class_Test1)
        sum=sum+((Class_Test1+Class_Test3)/2);
        else
        sum= sum+((Class_Test2+Class_Test1)/2);
        if(sum>=90)
        cout<<"Case "<<i<<": A"<<endl;
        else if(sum>=80)
        cout<<"Case "<<i<<": B"<<endl;
        else if(sum>=70)
        cout<<"Case "<<i<<": C"<<endl;
        else if(sum>=60)
        cout<<"Case "<<i<<": D"<<endl;
        else
        cout<<"Case "<<i<<": F"<<endl;
    }
}
