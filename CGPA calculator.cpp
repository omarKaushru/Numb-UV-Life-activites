#include <iostream>
using namespace std;

int main()
{
    double credit,gp,total_GP=0, total_credit=0, CGPA;

    while(cin>>credit>>gp)
    {
        total_GP=total_GP+credit*gp;
        total_credit=total_credit+credit;
    }
    CGPA=total_GP/total_credit;
    cout<<"Total GP :"<<total_GP<<"\nTotal Credit :"<<total_credit<<"\n\nCGPA :"<<CGPA<<endl;
    return 0;
}
