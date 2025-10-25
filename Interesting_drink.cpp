#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int t;
    cin >> t;
    long long m[t];
    for (int i = 0; i < t; i++) {
        cin >> m[i];
        int cnt = upper_bound(arr, arr + n, m[i]) - arr;
        cout << cnt << endl;
    }
}
