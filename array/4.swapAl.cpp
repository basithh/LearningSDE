#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int num = 0;
    while (num<10)
    {
        int temp = 0;
        temp = arr[num+1];
        arr[num+1] = arr[num];
        arr[num] = temp;
        num+=2;
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}