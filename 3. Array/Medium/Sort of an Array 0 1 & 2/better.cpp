#include <bits/stdc++.h>
using namespace std;
// TC -> O(2N)   & SC -> o(1)
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int zero = 0, one = 0, two = 0;
    for (auto &u : v)
    {
        cin >> u;
        if (u == 0)
            zero++;
        else if (u == 1)
            one++;
        else if (u == 2)
            two++;
    }
    for (int i = 0; i < zero; i++)
        v[i] = 0;
    for (int i = zero; i < zero + one; i++)
        v[i] = 1;
    for (int i = zero + one; i < n; i++)
        v[i] = 2;
    for (auto &u : v)
        cout << u << " ";
    cout << endl;
    return 0;
}

/*
10
1 0 1 1 0 2 0 1 0 2
*/