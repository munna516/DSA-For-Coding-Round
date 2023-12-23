#include <bits/stdc++.h>
using namespace std;
// TC -> O(n)   & SC -> O(1)
int stock_buy_sell(vector<int> &v, int n)  // DP
{
    int profit = 0, mini = v[0];
    for (int i = 1; i < n; i++)
    {
        int cost = v[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, v[i]);
    }
    return profit;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;
    cout << stock_buy_sell(v, n) << endl;

    return 0;
}

/*
7
7 1 2 4 3 6 5
*/