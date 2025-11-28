#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100
char stack[MAX];
int top = -1;

int push(char c)
{
    stack[++top] = c;
}

char pop()
{
    return stack[top--];
}

int prec(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

int main()
{
    char postfix[MAX], infix[MAX];
    int i = 0, j = 0;
    char ch;
    printf("Enter infix expression: ");
    scanf("%s", infix);
    while ((ch = infix[i++]) != '\0')
    {
        if (isalnum(ch))
        {
            postfix[j++] = ch;
        }
        else if (ch == '(')
        {
            push(ch);
        }
        else if (ch == ')')
        {
            while (top != -1 && stack[top] != '(')
            {
                postfix[j++] = pop();
            }
            pop();
        }
        else
        {
            while (top != -1 && stack[top] != '(' && prec(stack[top]) >= prec(ch))
            {
                postfix[j++] = pop();
            }
            push(ch);
        }
    }

    while (top != -1)
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    printf("Postfix expression: %s\n", postfix);
    return 0;
}
