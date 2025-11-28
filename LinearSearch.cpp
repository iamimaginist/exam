#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int found = 0;
    int key;

    printf("Enter the number of Elements:");
    scanf("%d", &n);

    printf("Enter the numbers : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search:");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("The element %d was found in %d position", key, i + 1);
    else
        printf("The element is not in this array");

    return 0;
}
