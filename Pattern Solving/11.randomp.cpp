#include <iostream>
using namespace std;
int main(){
    int a=1;
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 50- i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<a++<<"  ";
        }
        cout<<endl;
        
    }
    
}