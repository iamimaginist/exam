#include <stdio.h>

int main()
{
    int n, i, key;

    // Ask user how many elements in the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Array declaration

    // Input elements (IMPORTANT: array must be sorted)
    printf("Enter elements in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Ask the user the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Binary search works by taking 3 values:
    int low = 0;      // First index
    int high = n - 1; // Last index
    int mid;          // Middle index
    int found = 0;    // To check if element is found or not

    // Binary Search Loop (runs until low crosses high)
    while (low <= high)
    {
        // Calculate the middle index
        mid = (low + high) / 2;

        // CASE 1: key found at mid
        if (arr[mid] == key)
        {
            printf("Element %d found at position %d (index %d)\n", key, mid + 1, mid);
            found = 1;
            break; // Exit loop because we found it
        }
        // CASE 2: key is bigger → it lies in the RIGHT half
        else if (arr[mid] < key)
        {
            // Move low boundary forward
            low = mid + 1;
        }
        // CASE 3: key is smaller → it lies in the LEFT half
        else
        {
            // Move high boundary backward
            high = mid - 1;
        }
    }

    // After the loop, if found is still 0 → not found
    if (!found)
    {
        printf("Element %d NOT found in the array.\n", key);
    }

    return 0;
}
