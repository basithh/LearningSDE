#include<iostream>
using namespace std;

int main(){
    int a[10] = {2,4,5,3,2,5,2,9,3,1};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a,a+n);
    for(int ner:a){
        cout<<ner;
    }

}