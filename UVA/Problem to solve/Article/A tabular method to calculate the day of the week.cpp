///False
#include <bits/stdc++.h>
using namespace std;

const char* weekday_names[] = {"Saturday", "Sunday", "Monday", "Tuesday",
  "Wednesday", "Thursday", "Friday"};

int main()
{
    int m,d,y;
    while(cin>>m>>d>>y)
    {
        int yy=y%100;
        int c=y/100;
        int day=(d+m+yy+(yy/4)+c)%7;
        cout<<weekday_names[day-1]<<endl;
    }
}
