#include <iostream>
using namespace std;

int stack[5];
int top = -1;
int n = 5;

void place(int val)
{
    if (top == n - 1)
    {
        cout << "Error: counter is full" << endl;
        return;
    }
    top++;
    stack[top] = val;
    cout << "Top tray: " << stack[top] << endl;
}

void take()
{
    if (top == -1)
    {
        cout << "Error: counter is empty" << endl;
        return;
    }
    top--;
    if (top == -1)
        cout << "Counter is now empty" << endl;
    else
        cout << "Top tray: " << stack[top] << endl;
}

int main()
{
    place(1);
    place(2);
    place(3);
    take();
    place(4);
    place(5);
    place(6);
    place(7);
    take();
    take();
    take();
    take();
    take();
    take();
    return 0;
}