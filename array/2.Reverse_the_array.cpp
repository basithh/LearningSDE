#include<iostream>
using namespace std;

int main(){
    
    int arr[100] = {1,2,3,4,5,6,7,8,9,0,5,3,2,6,2,1,3,5,7,5};
    int temp;
    for (int i = 0; i < 10 ; i++)
    {  
        temp = arr[19-i];
        arr[19-i] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < 20; i++)
    {
        cout<<arr[i];
    }
    
    
}