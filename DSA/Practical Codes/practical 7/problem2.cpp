#include <iostream>
using namespace std;

struct Node
{
    int patient;
    Node *next;
};

Node *front = NULL;
Node *rear = NULL;

void arrive(int patient)
{
    Node *n = new Node();
    n->patient = patient;
    n->next = NULL;
    if (rear == NULL)
    {
        front = n;
        rear = n;
    }
    else
    {
        rear->next = n;
        rear = n;
    }
    cout << "Front patient: " << front->patient << endl;
}

void attend()
{
    if (front == NULL)
    {
        cout << "Error: no patients waiting" << endl;
        return;
    }
    Node *toDelete = front;
    front = front->next;
    if (front == NULL)
        rear = NULL;
    delete toDelete;
    if (front == NULL)
        cout << "No patients left" << endl;
    else
        cout << "Front patient: " << front->patient << endl;
}

int main()
{
    arrive(101);
    arrive(102);
    arrive(103);
    attend();
    arrive(104);
    attend();
    attend();
    attend();
    attend();
    return 0;
}