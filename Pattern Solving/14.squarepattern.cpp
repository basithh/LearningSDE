#include <iostream>
using namespace std;

int main(){
    int n = 9;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<max((n-i),(n-j));
        }
        for (int j = (n*2)-1; j > n; j--)
        {
            cout<<max((n-(j-n-1)),(n-i));
            // cout<<;
        }
        cout<<endl;
        
    }
    for (int i = n-2; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<max((n-i),(n-j));
        }
        for (int j = (n*2)-1; j > n; j--)
        {
            cout<<max((n-(j-n-1)),(n-i));
            // cout<<;
        }
        cout<<endl;
        
    }
    
}