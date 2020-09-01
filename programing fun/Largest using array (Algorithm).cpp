#include <iostream>
using namespace std;
int main()
{
	int a[15],n,i=1,res;
	cin>>n;
	for(i=1; i<=n; i++)
	cin>>a[i];
	res=a[1];
	for(i=2; i<=n; i++)
	{
		if(a[i]>res)
		res=a[i];
	}
	cout<<res;
	return 0;
}
