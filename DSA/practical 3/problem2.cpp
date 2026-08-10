#include <iostream>
using namespace std;
// selection sort
int main()
{
    int arr[] = {2, 4, 1, 9, 6};
    for (int i = 0; i < 4; i++)
    {
        int index = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}