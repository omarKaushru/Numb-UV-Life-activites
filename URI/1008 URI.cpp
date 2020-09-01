#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number, hour;
    float amount,salary;

    while(cin>>number>>hour>>amount)
    {
        salary=amount*hour;
        cout<<"NUMBER = "<<number<<endl;
        printf("SALARY = U$ %.2f\n",salary);
    }
    return 0;
}
