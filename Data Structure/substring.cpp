#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int i,j, position_of_the_first_charcter,length_of_the_substring;
    char str[10001],substr[10001];
    gets(str);
    cin>>position_of_the_first_charcter>>length_of_the_substring;
    j=0;
    for(i=position_of_the_first_charcter-1; i<length_of_the_substring+position_of_the_first_charcter-1; i++)
    {
        substr[j]=str[i];
        j++;
    }
    puts(substr);
    return 0;
}
