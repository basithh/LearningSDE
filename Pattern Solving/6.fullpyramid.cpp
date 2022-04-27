#include <iostream>
using namespace std;
int main(){
    int row =12;

    // cout<<"Enter Pyramid Size";
    // cin>>row;
//             * 
//            * * 
//           * * * 
//          * * * * 
//         * * * * * 
//        * * * * * * 
//       * * * * * * * 
//      * * * * * * * * 
//     * * * * * * * * * 
//    * * * * * * * * * * 
//   * * * * * * * * * * * 
//  * * * * * * * * * * * * 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row-i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
}