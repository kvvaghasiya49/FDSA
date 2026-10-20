#include <iostream>
using namespace std;

int table[10];
bool occupied[10] = {false};

void insert(int val)
{
    int idx = val % 10;
    int start = idx;

    while (occupied[idx])
    {
        idx = (idx + 1) % 10;
        if (idx == start)
        {
            cout << "Table full" << endl;
            return;
        }
    }
    table[idx] = val;
    occupied[idx] = true;
}

void display()
{
    for (int i = 0; i < 10; i++)
    {
        if (occupied[i])
            cout << i << ": " << table[i] << endl;
        else
            cout << i << ": empty" << endl;
    }
}

int main()
{
    int vehicles[] = {23, 45, 12, 67, 15};
    int n = 5;

    for (int i = 0; i < n; i++)
        insert(vehicles[i]);

    display();
    return 0;
}