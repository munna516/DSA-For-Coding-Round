#include <bits/stdc++.h>
using namespace std;
// TC -> O(n! * n)  SC-> O(n) + O(n)
void permutation(int index, vector<vector<int>> &ans, vector<int> &v)
{
    if (index == v.size())
    {
        ans.push_back(v);
        return;
    }
    for (int i = index; i < (int)v.size(); i++)
    {
        swap(v[index], v[i]);
        permutation(index + 1, ans, v);
        swap(v[index], v[i]);
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
    permutation(0, ans, v);
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