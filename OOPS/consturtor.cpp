#include<iostream>
using namespace std;

class Human{
    int age;
    public:
    Human(int age){
        cout<<"Hello Basith!";
        this->age = age;
    }
    ~Human(){
        cout<<"Suck Out";
    }
    int getage(){
        return age;
    }
};

int main(){
    Human *a = new Human(10);
    cout<<a->getage();
    delete a;
}