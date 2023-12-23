#include <bits/stdc++.h>
using namespace std;
// TC -> O(n)  & SC -> O(1)
int maxsubarraysum(vector<int> &v, int n) // Using Kadane's algorithm for max subarray sum
{
    int maxi = LONG_MIN;
    long long sum = 0;
    for (auto &it : v)
    {
        sum += it;
        if (sum > maxi)
            maxi = sum;
        if (sum < 0)
            sum = 0;
    }
    return maxi;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    cout << maxsubarraysum(v, n) << endl;

    return 0;
}

/*
9
-2 1 -3 4 -1 2 1 -5 4
*/