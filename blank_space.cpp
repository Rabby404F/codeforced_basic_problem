#include <iostream>
using namespace std;

int main()
{
    int r;
    cin >> r;
    while (r--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                count++;
                if (count > max)
                    max = count;
            }
            else if (arr[i] == 1)
            {
                count = 0;
            }
        }
        cout << max << endl;
    }
}