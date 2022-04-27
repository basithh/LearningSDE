#include <iostream>
using namespace std;
int main()
{
    // ************
    // *****  *****
    // ****    ****
    // ***      ***
    // **        **
    // *          *
    // **        **
    // ***      ***
    // ****    ****
    // *****  *****
    // ************

    int row = 6;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < row - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * (row - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}