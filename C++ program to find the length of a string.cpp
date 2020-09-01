#include <iostream>

using namespace std;

int main()
{
    char str[1000];
    int length = 0;
    cout << "Enter a string\n";
    cin.getline(str, 1000);

    while(str[length] != '\0')
    {
     length++;
    }

    cout << "Length of String is : " << length << endl;

    return 0;
}
