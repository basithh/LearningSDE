#include<iostream>
using namespace std;

int main(){
    int a = 10;
    cout<<a;
    int *b = new int[10];
    *b = 9;
    cout<<b[1]<<endl;
    for (int i = 0; i < 10; i++)
    {
        b[i] = i+1;
    }
    delete[] b;
    cout<<b;
}