#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <long int> v;
    for(long int i=1; i<1000000000; i++)
    v.push_back(i);

    for(long int i=0; i<v.size(); i++)
    cout<<v[i]<<" ";

}
