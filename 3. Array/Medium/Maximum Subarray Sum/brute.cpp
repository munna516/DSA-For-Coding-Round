#include <bits/stdc++.h>
using namespace std;
// TC -> O(n^3)  & SC -> O(1)
int maxsubarraysum(vector<int> &v, int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k < j; k++)
            {
                sum += v[k];
            }
            maxi = max(maxi, sum);
        }
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