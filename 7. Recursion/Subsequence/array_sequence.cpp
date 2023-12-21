#include <bits/stdc++.h>
using namespace std;
/* TC -> O(n)   SC-> O(n) */
void Subsequence(int i, vector<int> &ds, int ar[], int n)
{
    if (i >= n)
    {
        for (auto &u : ds)
            cout << u << " ";
        if (ds.size() == 0)
            cout << "{}";
        cout << endl;
        return;
    }
    // Not Take condition
    Subsequence(i + 1, ds, ar, n);

    // Take condition
    ds.push_back(ar[i]);
    Subsequence(i + 1, ds, ar, n);

    ds.pop_back();
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    vector<int> ds;
    Subsequence(0, ds, ar, n);

    return 0;
}