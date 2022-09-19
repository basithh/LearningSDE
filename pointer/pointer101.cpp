#include<iostream>
using namespace std;

int test(int **p){
    cout<<*p;
    return 0;
}


int main(){
    int a[10] ={1,2,2,4,5,73,7,8,9};
    test(&*a);

}