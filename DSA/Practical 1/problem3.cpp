#include <iostream>
using namespace std;
int main()
{
    string arr[5] = {"k", "kr", "kri", "krish", "kkkkk"};
    string max;
    arr[0] = max;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "the longest word is " << max << endl;
    cout << "the longest word's length is " << max.length() << endl;
}
