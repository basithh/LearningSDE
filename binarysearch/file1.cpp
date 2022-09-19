#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid;
        }
        else
        {
            end = mid;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {};
    int n = 10;
    int target = 6;
    cout << binary_search(arr, n, target);
}