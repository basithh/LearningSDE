#include<iostream>
using namespace std;

int main(){
    // Power of 2
    int num = 7;
    int ans = num & (num-1);
    if(ans==0){
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }
}