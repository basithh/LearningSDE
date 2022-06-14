#include <iostream>
using namespace std;

int main()
{
    int a[4] = {1, 3, 4, 6};
    int b[4] = {2, 3, 7, 8};
    int c[8];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i != 4 && j != 4)
    {
        // cout<<"bb";
        if (a[i] <= b[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = b[j];
            k++;
            j++;
        }
    }
    while (i != 4)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j != 4)
    {
        c[k] = b[j];
        k++;
        j++;
    }
    for (int i = 0; i < 8; i++)
    {
        cout << c[i]<<"  ";
    }
}