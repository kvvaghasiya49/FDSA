#include <iostream>
#include <string>
using namespace std;

char stack[100];
int top = -1;

void push(char c)
{
    top++;
    stack[top] = c;
}

char pop()
{
    char c = stack[top];
    top--;
    return c;
}

int precedence(char c)
{
    if (c == '^')
        return 3;
    if (c == '*' || c == '/')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}

int main()
{
    string infix = "(3+4)*2";
    string postfix = " ";

    for (int i = 0; i < infix.length(); i++)
    {
        char c = infix[i];

        if (c >= '0' && c <= '9')
        {
            postfix += c;
        }
        else if (c == '(')
        {
            push(c);
        }
        else if (c == ')')
        {
            while (top != -1 && stack[top] != '(')
                postfix += pop();
            pop();
        }
        else
        {
            while (top != -1 && precedence(stack[top]) >= precedence(c))
                postfix += pop();
            push(c);
        }
    }

    while (top != -1)
        postfix += pop();

    cout << "Postfix: " << postfix << endl;
    return 0;
}