///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, x, Case = 0;
	cin>>t;
	while(t--)
	{
	    cin>>n;
		int count[101] = {};
		int i, j, flag = 1;
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				cin>>x;
				count[x]++;
				if(count[x] > n)
					flag = 0;
			}
		}
		Case++;
		cout<<"Case "<<Case<<": ";
		if(flag == 1)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
	}
    return 0;
}
