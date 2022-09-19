#include <iostream>
#include <vector>
using namespace std;

void coind(vector<int> coin, int index, int out, int n, int &cnt,vector<vector<int>> &storage,vector<int> &sestorage)
{
    if (coin.size() == index || out > n)
    {
        return;
    }
    if (out == n)
    {
        cnt++;
        storage.push_back(sestorage);
        return;
    }
    out += coin[index];
    sestorage.push_back(coin[index]);
    coind(coin, index, out, n, cnt,storage,sestorage);
    out -= coin[index];
    sestorage.pop_back();
    coind(coin, index + 1, out, n, cnt,storage,sestorage);
}

int main()
{
    vector<int> coin = {50,1000};
    int n = 550;
    int cnt = 0;
    vector<vector<int>> storage;
    vector<int> sstore;
    coind(coin, 0, 0, n, cnt,storage,sstore);
    cout << cnt;
    cout<<endl;
    for (int i = 0; i < storage.size(); i++)
    {
        for (int j = 0; j < storage[i].size(); j++)
        {
            cout<<storage[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}