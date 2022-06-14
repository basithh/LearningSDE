#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int ar[100];
    for (int i = 1; i < 100; i++)
    {
        ar[i] = pow(i, 2);
    }
    for (int i = 1; i < 100; i++)
    {
        for (int j = 1; j < 100; j++)
        {
            int a = pow(i, 2) + pow(j, 2);
            for (int k = 1; k < 100; k++)
            {
                if(a==ar[k]){
                    cout<<i<<"  "<<j<<"  "<<k<<endl;
                }
            }
        }
    }
}