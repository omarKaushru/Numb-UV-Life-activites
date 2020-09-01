///Accepted
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <ctime>

#define Inf 2147483647
#define Pi acos(-1.0)
#define N 1000000
#define LL long long

inline LL Power(int b, int p) { LL ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }

#define F(i, a, b) for( int i = (a); i < (b); i++ )
#define Fs(i, sz) for( size_t i = 0; i < sz.size (); i++ )
#define Fe(i, x) for(typeof (x.begin()) i = x.begin(); i != x.end (); i++)
#define Set(a, s) memset(a, s, sizeof (a))
#define max(a, b)  (a < b ? b : a)
#define min(a, b)  (a > b ? b : a)

using namespace std;

#define EVEN 1
#define HEAVY 50
#define LIGHT -50

string measures [3] [3];

bool checkBalance(char ch, bool isHeavy)
{
    int leftWeight;
    int rightWeight;

    for ( int i = 0; i < 3; i++ ) {

        leftWeight = rightWeight = 0;

        Fs(k, measures [i] [0]) {
            if (measures [i] [0] [k] == ch) leftWeight += (isHeavy ? HEAVY : LIGHT);
            else leftWeight += EVEN;
        }

        Fs(k, measures [i] [1]) {
            if (measures [i] [1] [k] == ch) rightWeight += (isHeavy ? HEAVY : LIGHT);
            else rightWeight += EVEN;
        }

        if (measures [i] [2] == "even") {
            if (leftWeight != rightWeight) return false;

        } else if (measures [i] [2] == "up") {
            if (leftWeight <= rightWeight) return false;

        } else {
            if (leftWeight >= rightWeight) return false;
        }
    }

    return true;
}

int main ()
{
    int testCases; scanf ("%d", &testCases);

    while (testCases--) {

        for ( int i = 0; i < 3; i++ ) {
            for ( int j = 0; j < 3; j++ ) {
                cin >> measures [i] [j];
            }
        }

        for ( char ch = 'A'; ch <= 'L'; ch++ ) {
            if (checkBalance(ch, true)) {
                printf ("%c is the counterfeit coin and it is heavy.\n", ch);
            } else if (checkBalance(ch, false)) {
                printf ("%c is the counterfeit coin and it is light.\n", ch);
            }
        }
    }

    return 0;
}
