#include <iostream>
#include <string>
using namespace std;

int search(string plates[], int n, string target, int i = 0)
{
    if (i == n)
        return 0;

    if (plates[i] == target)
        return i + 1;
}

int main()
{
    string plates[] = {"NP1", "NP2", "NP3", "NP4"};
    int n = 4;
    string target = "NP3";

    int result = search(plates, n, target);

    if (result != 0)
        cout << "Target plate found at position : " << result << endl;
    else
        cout << "Target plate not found." << endl;

    return 0;
}