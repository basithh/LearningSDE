#include <iostream>
#include <vector>
using namespace std;

int factorial(int n){
    int temp=1;
    for(int i=1;i<=n;i++){
        temp*=i;
    }
    return temp;
}

int ncr(int row,int col){
    int a = row-col;
    return factorial(row)/(factorial(a)*factorial(col));
}





int main()
{
    // cout<<factorial(5);

    int n= 10;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<ncr(i,j)<<"  ";
        }
        cout<<endl;
    }
    
}

