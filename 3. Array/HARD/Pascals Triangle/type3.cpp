/* Given Row, now find  the pascal triangle*/
#include <bits/stdc++.h>
using namespace std;
// TC -> O(N^2) && SC -> O(N)
vector<long long> generateRow(int n)
{
    long long res = 1;
    vector<long long> ans;
    ans.push_back(1);
    for (int i = 1; i < n; i++)
    {
        res = res * (n - i);
        res = res / i;
        ans.push_back(res);
    }
    return ans;
}
int main()
{
    int row;
    cin >> row;
    vector<vector<long long>> ans;
    for (int i = 1; i <= row; i++)
    {
        ans.push_back(generateRow(i));
    }

    for (auto v : ans)
    {
        for (auto u : v)
        {
            cout << u << " ";
        }
        cout << endl;
    }

    return 0;
}