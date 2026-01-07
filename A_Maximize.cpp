#include <bits/stdc++.h>
#include <numeric>   // gcd for sure

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
    fast_io;

    int x;
    cin >> x;

    for (int i = x - 1; i >= 0; i--) {
        cout << gcd(x, i) << "\n";
    }

    return 0;
}
