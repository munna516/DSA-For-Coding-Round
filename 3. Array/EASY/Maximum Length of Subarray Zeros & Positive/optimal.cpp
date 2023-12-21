#include <bits/stdc++.h>
using namespace std;
// TC -> O(N) && SC -> O(1)
int MaxlenSubArraySum(vector<int> &v, int n, int k)
{
    int left = 0, right = 0, maxlen = 0;
    long long sum = v[0];
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= v[left];
            left++;
        }
        if (sum == k)
        {
            maxlen = max(maxlen, right - left + 1);
        }
        right++;
        if (right < n)
            sum += v[right];
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