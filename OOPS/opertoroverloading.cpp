#include<iostream>
using namespace std;

class Demo{
    public: 
    int gh;

    int operator+ (Demo &temp){
        cout<<"Fuck";
        return 8;
    }
    int operator++ (){
        cout<<"sj";
        return 0;
    }
};

int operator<< (ostream& os, Demo& temp){
    cout<<"Fucked";
    return 0;
}

int main(){
    Demo a;
    Demo b;
    // cout<<a+b; 
    cout<a;
}