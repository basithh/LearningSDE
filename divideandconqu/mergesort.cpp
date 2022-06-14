#include <iostream>
using namespace std;

int mergesorter(int arr[], int start, int end)
{

    int *ar1 = new int[start];
    int *ar2 = new int[end];

    int mid = (start + end) / 2;

    int n = start;
    for (int i = 0; i < (mid - start+1) ; i++)
    {
        ar1[i] = arr[n];
        cout<<arr[n++]<<" ";
    }
    cout<<"       ";
    n = mid+1;
    for (int i = 0; i < (end - mid); i++)
    {
        ar2[i] = arr[n];
        cout<<arr[n++]<<" ";
    }
    n = start;
    int i = 0;
    int j = 0;

    while (i < (mid - start+1) && j < (end - mid))
    {
        if (ar1[i] <= ar2[j])
        {
            arr[n++] = ar1[i++];
        }
        else
        {
            arr[n++] = ar2[j++];
        }
    }
    while (i < (mid - start + 1))
    {
        arr[n++] = ar1[i++];
    }
    while (j < (end - mid))
    {
        arr[n++] = ar2[j++];
    }
    cout<<endl;
    return 0;
}

void mergesort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    mergesorter(arr, start, end);
}

int main()
{
    int arr[10] = {4, 2, 5, 1, 8, 0, 9, 3, 6, 7};
    int start = 0;
    int end = 10;
    mergesort(arr, start, end-1);
    cout<<"sort"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << " " << arr[i];
    }
}