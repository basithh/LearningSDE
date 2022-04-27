#include <iostream>
using namespace std;

int main()
{
    int a = 6;
    int b = 3;
    for (int i = 0; i < a+1; i++)
    {
        if (i < (a / 2))
        {
            
            for (int j = 0; j <= i; j++)
            {

                cout << b;
            }
            b += 1;
        }
        else
        {
            
            for (int j = 0; j <= a-i; j++)
            {

                cout << b;
            }
            b -= 1;
        }
        cout<<endl;
    }
}