#include <bits/stdc++.h>
using namespace std;

int main()
{
    char inputString[1000];
    // we are using an integer array(initialized with zero) to store
    // frequency of characters at index equal to their ascii value
    int i, count[256] = {0};

    cout << "Enter a String\n";
    gets(inputString);

    for(i=0; inputString[i] != '\0'; i++)
    {
        // Populate frequency count array
        count[inputString[i]]++;
    }

    cout << "\nCharacter   Frequency\n";
    for(i=0; i < 256; i++)
    {
        if(count[i] != 0)
        {
          cout <<"  " << (char)i << "         " << count[i]<< endl;
        }
    }

    return 0;
}
