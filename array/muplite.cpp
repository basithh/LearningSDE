#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> unitmul(vector<int> &items, int mupli, int vp)
{
    vector<int> answer(vp, 0);
    int temp = 0;
    for (int i = items.size() - 1; i >= 0; i--)
    {
        int a = (items[i] * mupli) + temp;
        answer.push_back((a % 10));
        temp = a / 10;
    }

    {
        answer.push_back((temp % 10));
    }
    while (temp / 10)
        ;

    return answer;
}

int main()
{
    int a;
    int b;
    vector<int> mu1;
    vector<int> mu2;
    cin >> a;

    // while (a>0)
    // {
    //     mu1.push_back((a % 10));
    //     a/=10;

    // }
    //     reverse(mu1.begin(), mu1.end());
    // while (b>0)
    // {
    //     mu2.push_back((b % 10));
    //     b/=10;

    // }
    //     reverse(mu2.begin(), mu2.end());
    while (a--)
    {
        int x;
        cin>>x;
        mu1.push_back(x);
    }
    cout<<"next"<<endl;
    cin>>b;

    while (b--)
    {
        int x;
        cin>>x;
        mu2.push_back(x);

    }

    int valpro = mu1.size() + mu2.size();
    vector<vector<int>> ans;
    for (int i = mu2.size() - 1; i >= 0; i--)
    {
        vector<int> oldans = unitmul(mu1, mu2[i], mu2.size() - 1 - i);

        for (int j = 0; j < i; j++)
        {
            oldans.push_back(0);
        }

        ans.push_back(oldans);
    }
    int temp = 0;
    vector<int> finalans;
    for (int i = 0; i < ans[1].size() - 1; i++)
    {

        for (int k = 0; k < ans.size(); k++)
        {
            temp += ans[k][i];
        }
        finalans.push_back((temp % 10));
        temp = temp / 10;
    }
    do
    {
        cout<<"hi";
        finalans.push_back((temp % 10));
    } while (temp / 10);

    reverse(finalans.begin(), finalans.end());

     for (int i = 0; i < mu1.size(); i++)
    {
        cout << mu1[i];
    }
    cout<<endl;
     for (int i = 0; i < mu2.size(); i++)
    {
        cout << mu2[i];
    }
    cout<<endl;
    for (int i = 0; i < finalans.size(); i++)
    {
        cout << finalans[i];
    }
}