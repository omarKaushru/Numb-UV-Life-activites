#include <conio.h>
#include <iostream>
#include <deque>     // deque class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator
using namespace std;
main()
{
   deque< int > values; // create deque of type int
   ostream_iterator< int > output(cout, " ");
 
   values.push_front(4);
   values.push_front(3);
   values.push_back(1);
   values.push_back(5);
   cout << "values contains: ";
   // use subscript operator to obtain elements of values
   for ( int i = 0; i < values.size(); i++ )
   cout << values[i] << ' ';
   cout << endl;
   getch();
}
