#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    map<int, int> cnt;
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        ++cnt[a];
    }
    bool valid = true;
    for (auto c ; cnt;)
    {
        if (c.second > n - c.second + 1) {
            valid = false;
            break;
        }
    }
    cout << (valid ? "YES" : "NO") << endl;
    return 0;
}
