#include <iostream>

using namespace std;

void evenprint(int a){
    for(int i=0;i<=30;i=i+2){
        cout<<i<<"\n";
    }
}
void square(int a){
        for(int i=0;i<=a;i++){
        cout<<i*i<<"\n";
    }
}
void factorail(int a){
    int temp =1;
        for(int i=1;i<=a;i++){
        temp *= i;
    }
    cout<<temp;
}

int main(){
    int a =30;
    factorail(a);
}