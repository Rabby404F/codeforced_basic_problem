#include <stdio.h>

int main() {
    char str[100], sub[50], result[150];
    int pos, i, j = 0;

    // Input main string
    printf("Enter the main string: ");
    gets(str);

    // Input substring
    printf("Enter the substring: ");
    gets(sub);

    // Input position
    printf("Enter the position (0-based index): ");
    scanf("%d", &pos);

    // Copy characters before the position
    for (i = 0; i < pos && str[i] != '\0'; i++) {
        result[j] = str[i];
        j++;
    }

    // Insert substring
    for (i = 0; sub[i] != '\0'; i++) {
        result[j] = sub[i];
        j++;
    }

    // Copy remaining characters of main string
    for (i = pos; str[i] != '\0'; i++) {
        result[j] = str[i];
        j++;
    }

    result[j] = '\0';

    // Output result
    printf("String after insertion: %s\n", result);

    return 0;
}