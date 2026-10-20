#include <iostream>
using namespace std;

int queue[5];
int front = -1, rear = -1;
int n = 5;

void join(int val)
{
    if (rear == n - 1)
    {
        cout << "Error: counter is full" << endl;
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = val;
    cout << "Front token: " << queue[front] << endl;
}

void serve()
{
    if (front == -1 || front > rear)
    {
        cout << "Error: counter is empty" << endl;
        return;
    }
    front++;
    if (front > rear)
    {
        cout << "Counter is now empty" << endl;
        front = -1;
        rear = -1;
    }
    else
    {
        cout << "Front token: " << queue[front] << endl;
    }
}

int main()
{
    join(1);
    join(2);
    join(3);
    serve();
    join(4);
    join(5);
    join(6);
    serve();
    serve();
    serve();
    serve();
    serve();
    return 0;
}