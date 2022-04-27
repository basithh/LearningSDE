#include<iostream>
using namespace std;

int main(){
    int a = -1;
    int b = 1;
    for (int i = 0; i < 10; i++)
    {
        int sum = a+b;
        a=b;
        b= sum;
        cout<<sum<<"  ";
    }
    
    return 0;
}