#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int r;
    cout << "enter number of rotations :";
    cin >> r;
    r = r % 5;
    for (int i = r; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < r; i++)
    {
        cout << arr[i] << " ";
    }
}
