#include<iostream>
using namespace std;

int main(){
    // Complement of a number
    int mask =0;
    int num = 5;

    while(mask<num){
        mask = mask<<1|1;
    }
    int a = (~num) & mask;
    cout<<a;
}