#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of borrow records: ";
    cin >> n;
    int book[n];
    cout << "Enter Book IDs:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> book[i];
    }

    cout << "Books borrowed more than once are:\n";

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int temp = 1;

        for (int j = 0; j < n; j++)
        {
            if (book[i] == book[j])
            {
                count++;
                if (j < i)
                    temp = 0;
            }
        }

        if (count > 1 && temp == 1)
        {
            cout << book[i] << endl;
        }
    }

    return 0;
}