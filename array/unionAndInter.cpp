#include <iostream>
using namespace std;
int union1(int a[], int asize, int b[], int bsize)
{
    int c[asize + bsize];
    int csize = 0, i = 0, j = 0;
    while (i < asize && j < bsize)
    {
        if (a[i] < b[j])
        {
            c[csize] = a[i];
            csize++;
            i++;
        }
        else if (a[i] > b[j])
        {
            c[csize] = b[j];
            csize++;
            j++;
        }
        else
        {
            c[csize] = a[i];
            csize++;
            i++;
            j++;
        }
    }
    while (i < asize)
    {
        c[csize] = a[i];
        csize++;
        i++;
    }
    while (j < bsize)
    {
        c[csize] = b[j];
        csize++;
        j++;
    }
    for (int i = 0; i < csize; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}
int intersection(int a[], int asize, int b[], int bsize)
{
    int c[asize + bsize];
    int csize = 0, i = 0, j = 0;
    while (i < asize && j < bsize)
    {
        if (a[i] < b[j])
        {
            // c[csize] = a[i];
            // csize++;
            i++;
        }
        else if (a[i] > b[j])
        {
            // c[csize] = b[j];
            // csize++;
            j++;
        }
        else
        {
            c[csize] = a[i];
            csize++;
            i++;
            j++;
        }
    }
    // while (i < asize)
    // {
    //     c[csize] = a[i];
    //     csize++;
    //     i++;
    // }
    // while (j < bsize)
    // {
    //     c[csize] = b[j];
    //     csize++;
    //     j++;
    // }
    for (int i = 0; i < csize; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}
int main()
{
    int a[5] = {1, 3, 4, 5, 7};
    int b[3] = {1, 2, 4};
    int asize = 5;
    int bsize = 3;
    union1(a, asize, b, bsize);
    cout<<"\n";
    intersection(a, asize, b, bsize);
}