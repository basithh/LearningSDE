#include <iostream>
using namespace std;

int main()
{
    int ibeg = 0;
    int iend = 3;
    int jbeg = 0;
    int jend = 3;
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
    int r1 = 1;
    int r2 = 0;
    int c1 = 0;
    int c2 = 0;
    int count = 16;
    while (count--)
    {
        if(r1==1){
            cout<<arr[ibeg][jbeg]<<"   ";
            jbeg++;
            if(jbeg==jend){
                r1 = 0;
                c1 = 1;
                
            }

        }
        else if(c1==1){
            cout<<arr[ibeg][jbeg]<<"   " ;
            ibeg++;
            if(ibeg==iend){
                r2 = 1;
                c1 = 0;
                
            }
        }
        else if(r2==1){
            cout<<arr[ibeg][jbeg]<<"   ";
            jbeg--;
            if(jbeg==3-jend){
                r2 = 0;
                c2 = 1;
                jend--;
            }
        }
        else if(c2==1){
            cout<<arr[ibeg][jbeg]<<"   ";
            ibeg--;
            if(ibeg==4-iend){
                r1 = 1;
                c2 = 0;
                iend --;
            }
        }
    }
}