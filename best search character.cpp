#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[90],n;
	int i=0,j=0,x;
	cout<<"Enter a string:";
	gets(str);
	cout<<"\nEnter a character to be search:";
	cin>>n;
	while(str[i]!='\0')
	{
	 if(str[i]==n)
	 {

	 cout<<n<< " is at "<<i<<endl;
	 j++;
}
	i++;
	}
	if(j==0)
	cout<<"Not found";
return 0;
}
