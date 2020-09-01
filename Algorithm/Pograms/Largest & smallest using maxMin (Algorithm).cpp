#include <iostream>
using namespace std;
int main()
{
	int a[22],i,max,min,n;
	cin>>n;
	for(i=1; i<=n; i++)
	cin>>a[i];
	max=min=a[1];
	for(i=2; i<=n; i++)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
		if (a[i]<min)
		{
			min=a[i];
		}
	}
	cout<<"Maximum:"<<max<<endl;
	cout<<"Minimum:"<<min;
	return 0;
}
