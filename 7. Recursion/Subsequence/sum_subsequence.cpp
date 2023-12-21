#include <bits/stdc++.h>
using namespace std;
/* TC -> O(n)   SC-> O(n) */
void Subsequence(int i, vector<int> &ds, int ar[], int n, int target, int sum)
{
    if (i >= n)
    {
        if (sum == target)
        {
            for (auto &u : ds)
                cout << u << " ";
            cout << endl;
        }

        return;
    }
    // Not Take condition
    Subsequence(i + 1, ds, ar, n, target, sum);

    // Take condition
    ds.push_back(ar[i]);
    sum += ar[i];
    Subsequence(i + 1, ds, ar, n, target, sum);

    ds.pop_back();
    sum -= ar[i];
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