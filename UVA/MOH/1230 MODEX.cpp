///Accepted
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long lag;
lag x, xn, y;
int t, n;
lag powmod( lag e ){
	if( !e )
	return 1;
	lag half = powmod( e/2 );
	//cout<<"Half: "<<half<<" ";
	if( e%2 )
	return (xn*(half*half)%n)%n;
	return (half*half)%n;
}
int main()
{
	cin>>t;
	while( t-- )
	{
		cin>>x>>y>>n;
		xn = x%n;
		cout<<powmod(y)<<endl;
	}
}
