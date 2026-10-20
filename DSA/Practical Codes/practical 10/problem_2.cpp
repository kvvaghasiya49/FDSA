#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *table[10] = {NULL};

void insert(int val)
{
    int idx = val % 10;
    Node *n = new Node();
    n->data = val;
    n->next = table[idx];
    table[idx] = n;
}

void display()
{
    for (int i = 0; i < 10; i++)
    {
        cout << i << ": ";
        Node *temp = table[i];
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main()
{
    int books[] = {23, 45, 13, 67, 33, 15};
    int n = 6;

    for (int i = 0; i < n; i++)
        insert(books[i]);

    display();
    return 0;
}