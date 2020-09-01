#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[20],n;
	int i=0,j=0,x;
	cout<<"Enter a string:";
	cin>>str;
	cout<<"\nEnter a character to be search:";
	cin>>n;
	x=strlen(str);
	while(str[i]!='\0')
	{
	 if(str[i]==n)
	 break;
	i++;
	}
if (x==i)
cout<<"Not found";
else
	cout<<n<< " is at "<<i;
return 0;
}
