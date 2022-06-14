#include <iostream>
using namespace std;

int ko(int &p){
    p = p +1;
    return 0;
}

int main(){
    // int y = 0;
    // int a =5;
    // int *p = &a;
    // // cout<<&p<<endl;
    // // cout<<p<<endl;
    // // cout<<&a<<endl;
    // ko(*p);
    // int *p = 0;
    // cout<<*p;
    int a[3] = {1,2,3};
    // a= int(a)++;
    cout<<a++;

}