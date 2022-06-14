#include <iostream>
using namespace std;

int getposition(int arr[], int s, int e)
{
    int cnt = 0;
    int pivot = arr[s];
    for (int i = s+1; i <= e; i++)
    {
        if (arr[s] >= arr[i])
        {
            cnt++;
        }
    }
    cnt+=s;

    // Exchange
    int temp = arr[s];
    arr[s] = arr[cnt];
    arr[cnt] = temp;

    // Checking
    int i = s;
    int j = e;
    while (i < cnt && j > cnt)
    {
        while (pivot >= arr[i])
        {
            i++;
        }
        while (pivot < arr[j])
        {
            j--;
        }
        if (i < cnt && j > cnt)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    return cnt;
}

void quicksort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return ;
    }
    // Find Parition
    int inposition = getposition(arr, s, e);

    quicksort(arr,s,inposition-1);
    quicksort(arr,inposition+1,e);
    
}

int main()
{
    int arr[12] = {3, 5, 1,9,0, 4, 9, 7, 2, 0, 8, 6};
    int n = 12;
    quicksort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}