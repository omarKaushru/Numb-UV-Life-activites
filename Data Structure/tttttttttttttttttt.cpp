#include <iostream>
using namespace std;
int main()
{
    int x=1,y=2;
    cout<<y<<" "<<(y=x++)<<endl;
    cout<<++x<<" "<<++y;
    return 0;
}
