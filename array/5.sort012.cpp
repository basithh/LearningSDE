#include <iostream>
using namespace std;

int sort(int arr[],int size){
    int indexarr[3] = {0,0,0};
    for (int i = 0; i < size; i++)
    {
        indexarr[arr[i]]+=1;
    }
    int k = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < indexarr[i]; j++)
        {
            arr[k] = i;
            k++;
        }
        // cout<<indexarr[i]<<" ";
        
    }
    return 0;
    
    
}

int main(){
    int arr[10] = {1,0,2,1,2,2,0,0,1,0};
    sort(arr,10);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}