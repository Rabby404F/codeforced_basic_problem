#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    while (n--)
    {
        cin >> k;
        int count = 0;
        for (int i = 1; i <= k; i++)
        {
            if (i % 3 != 0 && i % 10 != 3)
            {
                count++;
            }
            else
            {   int j=i;
                while(j%3==0 || j%3==3)
                {
                    count++;
                    j++;
                }
            }

           
        }
         cout << "here" << count << endl;
    }
}