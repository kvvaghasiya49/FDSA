#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

Node *head = NULL;

void insertFront(int val)
{
    Node *n = new Node();
    n->data = val;
    n->prev = NULL;
    n->next = head;
    if (head != NULL)
        head->prev = n;
    head = n;
}

void insertEnd(int val)
{
    Node *n = new Node();
    n->data = val;
    n->next = NULL;
    if (head == NULL)
    {
        n->prev = NULL;
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = n;
    n->prev = temp;
}

void insertAfter(int target, int val)
{
    Node *temp = head;
    while (temp != NULL && temp->data != target)
        temp = temp->next;
    if (temp == NULL)
    {
        cout << "Song not found" << endl;
        return;
    }
    Node *n = new Node();
    n->data = val;
    n->next = temp->next;
    n->prev = temp;
    if (temp->next != NULL)
        temp->next->prev = n;
    temp->next = n;
}

void deleteFirst()
{
    if (head == NULL)
        return;
    Node *toDelete = head;
    head = head->next;
    if (head != NULL)
        head->prev = NULL;
    delete toDelete;
}

int countSongs()
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void display()
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
    display();

    insertFront(5);
    display();

    insertAfter(20, 25);
    display();

    cout << "Count: " << countSongs() << endl;

    deleteFirst();
    display();

    return 0;
}