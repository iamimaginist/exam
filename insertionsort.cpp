#include <stdio.h>

int main()
{
    int arr[] = {1, 56, 1, 35, 667, 33};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, key;

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
