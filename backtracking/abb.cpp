#include <iostream>
#include <set>
#include <string>
#include <map>
using namespace std;

void getter(string &a, set<string> &res, string &ou, map<int, bool> &track)
{
    
    
    for (int i = 0; i < a.length(); i++)
    {
        if (track[i] == 0)
        {
        
            ou.push_back(a[i]);
            cout<<ou<<endl;
            track[i] = 1;
            res.insert(ou);
            getter(a,res,ou,track);
            ou.pop_back();
            track[i] = 0;
        }
    }
    return;
}

int main()
{
    string a = "AAB";
    string b = "";
    map<int, bool> track;
    set<string> res ;
    getter(a,res,b,track);
    for (int i = 0; i < a.length(); i++)
    {
        track[i] = 0;
    }
    cout<<res.size();
    // for (int i = 0; i < res.size() ; i++)
    // {
    //     cout<<res[i]<<"\n";
    // }
    for (auto it = res.begin(); it !=
                             res.end(); ++it)
        cout << ' ' << *it;
    
}