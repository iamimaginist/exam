#include <stdio.h>

int summer(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + summer(n - 1);
    }
}

int main()
{
    int number;
    printf("Enter the natural number to be summed: ");
    scanf("%d", &number);
    printf("The result will be %d", summer(number));
}
