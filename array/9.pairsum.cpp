#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 3, 2, 5, 3, 1, 2, 6, -1, 5};
    int pairsum = 4;

    // Brute Force Method
    int count = 0;

    for (int i = 0; i < 10-1; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if(arr[i]+arr[j] == pairsum){
                cout<<i<<"  "<<j;
                cout<<endl;
            }
        }
        
    }
    cout<<count;
}