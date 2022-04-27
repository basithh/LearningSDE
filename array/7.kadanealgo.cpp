#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[10] = {-2, 4, -2, 5, -9, 4, -2, -4, 3, 3};
    int maxofall = INT_MIN;
    int temp = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     if (temp < 0)
    //     {
    //         temp = 0;
    //     }
    //     temp += arr[i];
    //     maxofall = max(maxofall, temp);
    // }
    for (int i = 0; i < 10; i++)
    {
        temp = max(temp+arr[i],arr[i]);
        maxofall = max(maxofall, temp);
        cout<<arr[i]<<"  "<<temp<<"  "<<maxofall<<endl;

    }
    cout << maxofall;
}