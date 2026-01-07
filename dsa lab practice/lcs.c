#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    char s1[100], s2[100];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    int m = strlen(s1);
    int n = strlen(s2);

    int dp[m + 1][n + 1];

    // Build LCS table
    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    printf("Length of Longest Common Subsequence = %d\n", dp[m][n]);

    return 0;
}