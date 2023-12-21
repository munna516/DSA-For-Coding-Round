#include <bits/stdc++.h>
using namespace std;
// TC -> O(N log N) && SC -> O(N)
int MaxlenSubArraySum(vector<int> &v, int n, int k)
{
    int maxlen = 0;
    map<long long, int> presum;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum == k)
            maxlen = max(maxlen, i + 1);
        long long rem = sum - k;
        if (presum.find(rem) != presum.end())
        {
            int len = i - presum[rem];
            maxlen = max(maxlen, len);
        }
        if (presum.find(sum) == presum.end())
            presum[sum] = i;
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