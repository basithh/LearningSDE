#include<iostream>
using namespace std;


void selection_sort(int arr[],int num){
    int i = 0;
    int j = 0;
    while(i<num){
        j = i+1;
        while (j<num)
        {
            // cout<<"PPP";
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int main(){
    int arr[10]={5,4,3,7,2,5,9,1,0,3};
    int num = 10;
    selection_sort(arr,num);
    for (int i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}