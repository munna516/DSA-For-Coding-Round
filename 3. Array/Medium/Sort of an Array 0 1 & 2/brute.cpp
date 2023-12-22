#include <bits/stdc++.h>
using namespace std;
// TC -> O(n log n)   & SC -> o(1)
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;
    sort(v.begin(), v.end());
    for (auto &u : v)
        cout << u << " ";
    cout << endl;
    return 0;
}

/*
10
1 0 1 1 0 2 0 1 0 2
*/