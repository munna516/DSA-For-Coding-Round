#include <bits/stdc++.h>
using namespace std;
// TC -> O(n! * n)  SC-> O(n) + O(n)
void permutation(vector<vector<int>> &ans, vector<int> &v, vector<int> &ds, int freq[])
{
    if (ds.size() == v.size())
    {
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < (int)v.size(); i++)
    {
        if (!freq[i])
        {
            ds.push_back(v[i]);
            freq[i] = 1;
            permutation(ans, v, ds, freq);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    vector<vector<int>> ans;
    vector<int> ds;
    int freq[v.size()] = {0};
    permutation(ans, v, ds, freq);
    for (auto &u : ans)
    {
        for (auto &it : u)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}