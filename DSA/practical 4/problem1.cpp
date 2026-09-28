#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void insertFront(int val)
{
    Node *n = new Node();
    n->data = val;
    n->next = head;
    head = n;
}

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

void insertAtPos(int val, int pos)
{
    if (pos == 1)
    {
        insertFront(val);
        return;
    }
    Node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;
    if (temp == NULL)
    {
        cout << "Invalid position" << endl;
        return;
    }
    Node *n = new Node();
    n->data = val;
    n->next = temp->next;
    temp->next = n;
}

void printList()
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
    insertFront(10);
    printList();
    insertEnd(20);
    printList();
    insertAtPos(15, 2);
    printList();
    insertFront(5);
    printList();
    return 0;
}