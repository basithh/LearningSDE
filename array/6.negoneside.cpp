#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = 9, m = 0 ,indexne=0;
    while (n > m)
    {
        int temp;
        if(arr[m]<0){
            temp = arr[m];
            for (int i = m; i > indexne ; i--)
            {
                arr[i]=arr[i-1];
            }
            arr[indexne]= temp;
            indexne++;  
        }
        m++;
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}