#include<iostream>
using namespace std;
int main(){
    int arr[6] = {1,2,3,4,4,5};
    int n = 6;
    int tempsum = 0;
    for(auto num: arr){
        tempsum += num;
    }
    int nsum = (n-1)*((n-1)+1)/2;
    int ans = tempsum - nsum; 
    cout<<ans;
    
}