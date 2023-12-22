#include <bits/stdc++.h>
using namespace std;
// TC -> O(n log n) + O(n)   & SC -> o(N)
int majority(vector<int> &v, int n)
{
    map<int, int> mp;
    for (auto it : v)
    {
        mp[it]++;
    }
    for (auto it : mp)
    {
        if (it.second > n / 2)
            return it.first;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;
    cout << majority(v, n) << endl;
    return 0;
}

/*
8
7 5 5 7 2 5 5 7
*/