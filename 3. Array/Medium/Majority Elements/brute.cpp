#include <bits/stdc++.h>
using namespace std;
// TC -> O(N^2)   & SC -> o(1)
int majority(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[i] == v[j])
                count++;
        }
        if (count > n / 2)
            return v[i];
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