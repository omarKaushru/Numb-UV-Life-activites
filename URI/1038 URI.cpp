#include <bits/stdc++.h>
using namespace std;

int main()
{
     long int y;
     char x;
    float total;
    while(cin>>x>>y)
    {
        switch(x)
        {
            case '1':
            total=float(y*4.00);
            break;
            case '2':
            total=float(y*4.50);
            break;
            case '3':
            total=float(y*5.00);
            break;
            case '4':
            total=float(y*2.00);
            break;
            case '5':
            total=float(y*1.50);
            break;
        }
        printf("Total: R$ %.2f\n",total);
    }
    return 0;
}
