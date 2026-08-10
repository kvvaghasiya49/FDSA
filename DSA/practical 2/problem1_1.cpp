#include <iostream>
using namespace std;

int main()
{
    string arr[] = {"NP1", "NP2", "NP3", "NP4"};

    string target = "NP2";
    int result = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == target)
        {
            result = i + 1;
            break;
        }
    }
    if (result != 0)
    {
        cout << "Target plate found at position : " << result << endl;
    }
    else
    {
        cout << "Target plate not found." << endl;
    }
    return 0;
}