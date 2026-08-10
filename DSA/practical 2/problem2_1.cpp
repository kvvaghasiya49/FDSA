#include <iostream>
using namespace std;
int main()
{
    int codes[] = {101, 202, 303, 404, 505};
    int target = 404; // 303 < 404;
    int low = 0, high = 5;
    int result = 0;
    for (int i = 0; i < 5; i++)
    {
        int mid = (high - low + 1) / 2;
        if (codes[mid] == target)
        {
            result = mid;
            break;
        }
        else if (codes[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "Target code found at index: " << result << endl;

    if (result != 0)
    {
        cout << "Target code found at index: " << result << endl;
    }
    else
    {
        cout << "Target code not found." << endl;
    }
    return 0;
}