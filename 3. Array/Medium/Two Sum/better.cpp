#include <bits/stdc++.h>
using namespace std;
// TC -> O(n*log n)   & SC -> O(N)
string twosum(vector<int> &v, int target)
{
    map<int, int> mp;
    for (int i = 0; i < v.size(); i++)
    {
        int value = v[i];
        int more = target - value;
        if (mp.find(more) != mp.end())
        {
            return "YES";
            // return {mp[more],i};   // if take indices
        }
        mp[value] = i;
    }
    return "NO";
}
int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;
    cout << twosum(v, target) << endl;

    return 0;
}

/*
6 15
2 5 6 9 8 11
*/