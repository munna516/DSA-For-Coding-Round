#include <bits/stdc++.h>
using namespace std;
/* TC -> O(n)   SC-> O(n) */
bool Subsequence(int i, vector<int> &ds, int ar[], int n, int target, int sum)
{
    if (i >= n)
    {
        if (sum == target)
        {
            for (auto &u : ds)
                cout << u << " ";
            return true;
        }
        else
            return false;
    }
    // Not Take condition
    if (Subsequence(i + 1, ds, ar, n, target, sum) == true)
        return true;

    // Take condition
    ds.push_back(ar[i]);
    sum += ar[i];
    if (Subsequence(i + 1, ds, ar, n, target, sum) == true)
        return true;

    ds.pop_back();
    sum -= ar[i];
    return false;
}
int main()
{
    int n, target;
    cin >> n >> target;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    vector<int> ds;
    Subsequence(0, ds, ar, n, target, 0);

    return 0;
}