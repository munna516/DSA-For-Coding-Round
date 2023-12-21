#include <bits/stdc++.h>
using namespace std;
// TC -> O(N^2) && SC -> O(1)
int MaxlenSubArraySum(vector<int> &v, int n, int k)
{
    int maxlen = 0;
    for (int i = 0; i < n; i++)
    {
        long long sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += v[j];
            if (sum == k)
            {
                maxlen = max(maxlen, abs(j - i) + 1);
            }
        }
    }
    return maxlen;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;
    int x = MaxlenSubArraySum(v, n, k);
    cout << x << endl;
    return 0;
}

/*
11 5
1 2 3 1 1 1 1 4 2 1 3
*/