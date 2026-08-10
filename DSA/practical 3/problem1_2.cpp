#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {1, 7, 2, 4, 3, 6, 5};

    int min;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (min > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}