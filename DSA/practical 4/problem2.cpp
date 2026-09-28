#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;

void insertEnd(int val)
{
    Node *n = new Node();
    n->data = val;
    n->next = NULL;
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = n;
}

void deleteValue(int val)
{
    if (head == NULL)
        return;
    if (head->data == val)
    {
        Node *Delete = head;
        head = head->next;
        delete Delete;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL && temp->next->data != val)
        temp = temp->next;
    if (temp->next == NULL)
    {
        cout << "Value not found" << endl;
        return;
    }
    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

void printForward()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    cout << "Forward: ";
    printForward();
    cout << "Reverse: ";
    deleteValue(20);
    cout << "After deleting 20: ";
    printForward();

    return 0;
}