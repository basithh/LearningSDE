#include<iostream>
using namespace std;

class Car{
    private:
    int weight;
    int colour;
    int type;
    int maxspeed;

    int getMaxspeed(){
        return maxspeed;
    }
};

int main(){
    Car a;
    a.getMaxspeed();
    // Car *a= new Car [100];
    // (a+1)->maxspeed = 10;
    // cout<<(a+1)->getMaxspeed();
}