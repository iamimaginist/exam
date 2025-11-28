#include <stdio.h>
#define MAX 90

int stack[MAX];
int top = -1;

int checkStatus(char c)
{
    if (c == 'F' && top == MAX - 1)
    {
        printf("Stack overflow");
        return 0;
    }
    if (c == 'E' && top == -1)
    {
        printf("Stack underflow");
        return 0;
    }
    return 1;
}

void push(int n)
{
    if (checkStatus('F'))
    {
        stack[++top] = n;
    }
}
void pop()
{
    if (checkStatus('E'))
    {
        top--;
    }
}
int peek()
{
    if (checkStatus('E'))
    {
        printf("%d\n", stack[top]);
    }
}
void display()
{
    if (checkStatus('E'))
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    push(12);
    printf("\n");
    push(13);
    printf("\n");
    push(112);
    printf("\n");
    push(144);
    printf("\n");
    pop();
    printf("\n");
    peek();
    display();
    return 0;
}
