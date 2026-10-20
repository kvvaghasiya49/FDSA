#include <iostream>
using namespace std;

int table[10];
bool occupied[10] = {false};

int hash1(int val)
{
    return val % 10;
}

int hash2(int val)
{
    return 7 - (val % 7);
}

void insert(int val)
{
    int idx = hash1(val);
    int step = hash2(val);
    int count = 0;

    while (occupied[idx])
    {
        idx = (idx + step) % 10;
        count++;
        if (count == 10)
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
    int ids[] = {23, 45, 13, 67, 33};
    int n = 5;

    for (int i = 0; i < n; i++)
        insert(ids[i]);

    display();
    return 0;
}