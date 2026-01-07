#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
        }

        long long ans = (sum + n - 1) / n;
        cout << ans << '\n';
    }
    return 0;
}