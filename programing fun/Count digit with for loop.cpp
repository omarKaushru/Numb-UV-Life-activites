#include <iostream>
using namespace std;
int main()
{
  int n,c=0,i;
  cout<<"Enter an integer:";
  cin>>n;
  for(i=0; n!=0; i++)
  {
      n=n/10;
  }
  cout<<"Number of digits:"<<i;
  return 0;
}
