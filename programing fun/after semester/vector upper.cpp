#include <conio.h>
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
main()
{
vector<char> v(13); // create a vector of length 13
unsigned int i;
// display original size of v
cout << "Size = " << v.size() << endl;
// assign the elements of the vector some values
for(i=0; i<13; i++) v[i] = i + 'a';
// display contents of vector
cout << "Current Contents:\n";
for(i=0; i<v.size(); i++) cout << v[i] << " ";
cout << "\n\n";
cout << "Expanding vector\n";
/* put more values onto the end of the vector,
it will grow as needed */
for(i=0; i<13; i++) v.push_back(i + 13 + 'a');
// display current size of v
cout << "Size now = " << v.size() << endl;
// display contents of vector
cout << "Current contents:\n";
for(i=0; i<v.size(); i++) cout << v[i] << " ";
cout << "\n\n";
// change contents of vector
for(i=0; i<v.size(); i++) v[i] = toupper(v[i]);
cout << "Modified Contents:\n";
for(i=0; i<v.size(); i++) cout << v[i] << " ";
cout << endl;
getch();
}
