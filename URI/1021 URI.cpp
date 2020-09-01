#include <bits/stdc++.h>
using namespace std;

int main()
{
    double N;
    int a, b, c;

    while(cin >> N)
    {
        a = N;
        N = 100*N;
        c = N;
        cout << "NOTAS:\n";
        cout << a/100 << " nota(s) de R$ 100.00\n";
        b = (a%100);
        cout << b/50 << " nota(s) de R$ 50.00\n";
        b = (b%50);
        cout << b/20 << " nota(s) de R$ 20.00\n";
        b = (b%20);
        cout << b/10 << " nota(s) de R$ 10.00\n";
        b = (b%10);
        cout << b/5 << " nota(s) de R$ 5.00\n";
        b = (b%5);
        cout << b/2 << " nota(s) de R$ 2.00\n";
        b = (b%2);
        cout << "MOEDAS:\n";
        cout << b/1 << " moeda(s) de R$ 1.00\n";
        c = c%100;
        cout <<  c/50 << " moeda(s) de R$ 0.50\n";
        c = c%50;
        cout <<  c/25 << " moeda(s) de R$ 0.25\n";
        c = c%25;
        cout <<  c/10 << " moeda(s) de R$ 0.10\n";
        c = c%10;
        cout <<  c/5 << " moeda(s) de R$ 0.05\n";
        c = c%5;
        cout <<  c/1 << " moeda(s) de R$ 0.01\n";
    }
}
