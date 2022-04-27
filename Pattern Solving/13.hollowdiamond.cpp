#include<iostream>
using namespace std;

int main(){
    int n =11;
    for (int i = 0; i < n/2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(((n/2)-i)==j){
                cout<<"#";
            }
            else if (((n/2)+i)==j)
            {
                cout<<"#";
            }
            else{
                cout<<" ";
            }
            
        }

        cout<<endl;
        
    }
    for (int i = (n-1)/2; i >=0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if(((n/2)-i)==j){
                cout<<"#";
            }
            else if (((n/2)+i)==j)
            {
                cout<<"#";
            }
            else{
                cout<<" ";
            }
            
        }

        cout<<endl;
        
    }
    
}