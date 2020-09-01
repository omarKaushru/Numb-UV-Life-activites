///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc, r, median, x[505], ans;
	cin>>tc;
	while (tc--)
	{
	    cin>>r;

		for (int i = 0; i < r; i++)
        cin>>x[i];

		sort(x, x + r);
		median = x[r / 2];

		ans = 0;
		for (int i = 0; i < r; i++)
        ans += abs(median - x[i]);

		cout<<ans<<endl;
	}

	return 0;
}
