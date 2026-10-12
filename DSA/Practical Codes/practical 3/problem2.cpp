#include <iostream>
using namespace std;

void sortColorsCounting(int arr[], int n)
{
    int count[3] = {0, 0, 0};

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    int a = 0;
    for (int i = 0; i < 3; i++)
    {
        while (count[i] > 0)
        {
            arr[a++] = i;
            count[i]--;
        }
    }
}

int main()
{
    int arr[] = {2, 0, 1, 2, 1, 0, 0, 1};
    int n = 8;

    sortColorsCounting(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
