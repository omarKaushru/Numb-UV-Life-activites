#include <conio.h>
#include <iostream>
#include <deque>     // deque class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator
using namespace std;
main()
{
   deque< int > values; // create deque of type int
   ostream_iterator< int > output(cout);
   for (int m=5; m<10; m++)
   values.push_front(m);
    for (int n=0; n<5; n++)
   values.push_back(n);
   cout << "values contains: ";
   // use subscript operator to obtain elements of values
   for ( int i = 0; i < values.size(); i++ )
   cout << values[i] << ' ';
   cout << endl;
   getch();
}
