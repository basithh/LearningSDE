#include<iostream>
using namespace std;

class Car{
    protected:
    int weight=10;
    int colour;
    int type;
    int maxspeed;
    int getMaxspeed(){
        return maxspeed; 
    }
};

class Kia:private Car{
    public:
    int getD(){
        return weight;
    }
};

int main(){
    Kia a;
    cout<<a.getD();
    // Car *a= new Car [100];
    // (a+1)->maxspeed = 10;
    // cout<<(a+1)->getMaxspeed();
}