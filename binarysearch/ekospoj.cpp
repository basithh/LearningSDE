#include<iostream>
using namespace std;

int sumup(int arr[],int size,int tar){
    int value=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>tar){
            int diff=arr[i]-tar;
            value+=diff;
        }
        
    }
    return value;
    
}

int main(){
    int arr[5] = {4 ,42, 40, 26, 46};
    int size = 5;
    int target = 20;
    int minheight = 0;
    int maxheight = -1;
    int g =0;
    for (int i = 0; i < size; i++)
    {
        maxheight = max(maxheight,arr[i]);
    }
    // for (int i = 0; i < maxheight; i++)
    // {
    //     cout<<i<<"  "<<sumup(arr,size,i)<<endl;
    // }
    while (minheight<=maxheight)
    {
        int mid = (minheight+maxheight)/2;
        if (sumup(arr,size,mid)==target)
        {
            cout<<mid;
            break;
        }
        else if (sumup(arr,size,mid)>target)
        {
            minheight = mid+1;
        }
        else{
            maxheight = mid-1;
        }
        
        
    }
    

    
    
}