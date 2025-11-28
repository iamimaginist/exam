#include <stdio.h>
#define MAX 10

void addArrayElements(int arr[MAX])
{
    for (int i = 0; i <= MAX - 1; i++)
    {
        int element;
        printf("Enter the %dth array elements: ", i);
        scanf("%d", &element);
        arr[i] = element;
    }
}

int main()
{
    int arr[MAX];
    addArrayElements(arr);
    printf("The reverse array will be: \n");
    for (int i = MAX - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
