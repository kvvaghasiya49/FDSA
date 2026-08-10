#include <iostream>
using namespace std;

int search(int codes[], int target, int low, int high)
{
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (codes[mid] == target)
        return mid;
    else if (codes[mid] < target)
        return search(codes, target, mid + 1, high);
    else
        return search(codes, target, low, mid - 1);
}

int main()
{
    int codes[] = {101, 202, 303, 404, 505};
    int n = 5;
    int target = 404;

    int result = search(codes, target, 0, n - 1);

    if (result != -1)
        cout << "Target code found at index: " << result << endl;
    else
        cout << "Target code not found." << endl;

    return 0;
}