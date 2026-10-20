#include <iostream>
using namespace std;

struct Node
{
    int page;
    Node *next;
};

Node *top = NULL;

void visit(int page)
{
    Node *n = new Node();
    n->page = page;
    n->next = top;
    top = n;
    cout << "Current page: " << top->page << endl;
}

void back()
{
    if (top == NULL)
    {
        cout << "Error: no history left" << endl;
        return;
    }
    Node *toDelete = top;
    top = top->next;
    delete toDelete;
    if (top == NULL)
        cout << "No pages left" << endl;
    else
        cout << "Current page: " << top->page << endl;
}

int main()
{
    visit(1);
    visit(2);
    visit(3);
    back();
    visit(4);
    back();
    back();
    back();
    back();
    return 0;
}