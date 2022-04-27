#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int k = 98;
    bool flag = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == k)
        {
            cout << "The element found at index " << i;
            flag = 1;
        }
    }
    if (!flag)
    {
        cout << "The element not found";
    }
}