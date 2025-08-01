#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--) {
        int a, b;
        cin >> a >> b;

        int count = (b - a % b) % b;
        cout << count << endl;
    }

    return 0;
}
