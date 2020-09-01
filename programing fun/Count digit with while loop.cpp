#include <iostream>
using namespace std;
int main()
{
  int n,c=0;
  cout<<"Enter an integer:";
  cin>>n;
  while(n!=0)
  {
      n=n/10;
      c++;
  }
  cout<<"Number of digits:"<<c;
  return 0;
}
