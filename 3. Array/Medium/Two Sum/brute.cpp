#include <bits/stdc++.h>
using namespace std;
// TC -> O(n^2)   & SC -> O(1)
string twosum(vector<int> &v, int target)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == target)
                return "YES";
        }
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