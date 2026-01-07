#include <stdio.h>

int main()
{
    int arr[100], n, i, key;
    int low, high, mid, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    /* Binary Search to find position */
    low = 0;
    high = n - 1;
    pos = n;   // default position (end)

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            pos = mid;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
            pos = low;
        }
        else
        {
            high = mid - 1;
            pos = mid;
        }
    }

    /* Shift elements to the right */
    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = key;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}