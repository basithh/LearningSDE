#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[10] = {3,2,354,44,4,456,6774,667,322,676};
    int maxno = INT_MIN;
    int minno = INT_MAX;
    for (int i = 0; i < 10; i++)
    {
        if(arr[i]>maxno){
            maxno = arr[i];
        }
        if(arr[i]<minno){
            minno = arr[i];
        }
    }

    cout<<"Max in array :"<<maxno<<endl;
    cout<<"Min in array :"<<minno;
    
}