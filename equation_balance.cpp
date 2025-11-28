#include <stdio.h>
#define MAX 20
char stack[MAX];
int top = -1;

void push(char c)
{
    if (top < MAX - 1)
    {
        stack[++top] = c;
    }
}

char pop()
{
    if (top >= 0)
    {
        return stack[top--];
    }
    return '\0';
}

int isMatching(char open, char close)
{
    if (open == '(' && close == ')')
        return 1;
    if (open == '[' && close == ']')
        return 1;
    if (open == '{' && close == '}')
        return 1;
    return 0;
}

int isBalanced(char exp[])
{
    char c, popped;
    for (int i = 0; exp[i] != '\0'; i++)
    {
        c = exp[i];
        if (c == '(' || c == '{' || c == '[')
        {
            push(c);
        }
        if (c == ')' || c == '}' || c == ']')
        {
            popped = pop();
            if (!isMatching(popped, c))
            {
                return 0;
            }
        }
    }
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    printf("Enter a expression: ");
    scanf("%s", stack);
    if (isBalanced(stack))
    {
        printf("Balanced");
        return 0;
    }
    printf("Not-Balanced");
    return 0;
}
