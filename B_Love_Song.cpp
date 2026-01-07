#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
    fast_io;

    int a, b;
    cin >> a >> b;

    string s;
    cin >> s;

   
    vector<int> prefix(a + 1, 0);

    for (int i = 1; i <= a; i++) {
        prefix[i] = prefix[i - 1] + (s[i - 1] - 'a' + 1);
    }

    while (b--) {
        int c, d;
        cin >> c >> d;
        cout << prefix[d] - prefix[c - 1] << '\n';
    }

    return 0;
}
