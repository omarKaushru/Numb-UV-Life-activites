#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    double fixed_salary,sales,total_salary;
    while(cin>>name>>fixed_salary>>sales)
    {
        total_salary=double(sales*(15.00/100.00))+fixed_salary;
        printf("TOTAL = R$ %.2lf\n",total_salary);
    }
    return 0;
}
