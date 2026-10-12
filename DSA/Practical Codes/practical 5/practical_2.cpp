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
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != head)
        temp = temp->next;
    temp->next = n;
    n->next = head;
}

void deleteValue(int val)
{
    if (head == NULL)
        return;

    if (head->data == val && head->next == head)
    {
        delete head;
        head = NULL;
        return;
    }

    Node *curr = head;
    Node *prev = NULL;
    do
    {
        if (curr->data == val)
        {
            if (curr == head)
            {
                Node *last = head;
                while (last->next != head)
                    last = last->next;
                head = head->next;
                last->next = head;
            }
            else
            {
                prev->next = curr->next;
            }
            delete curr;
            return;
        }
        prev = curr;
        curr = curr->next;
    } while (curr != head);

    cout << "Not found" << endl;
}

void display()
{
    if (head == NULL)
        return;
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    display();

    deleteValue(20);
    display();

    deleteValue(10);
    display();

    return 0;
}