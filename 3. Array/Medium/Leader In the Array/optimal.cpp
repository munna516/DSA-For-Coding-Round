#include <bits/stdc++.h>
using namespace std;
// TC -> O(n)  & SC -> O(1) if we ignore ans vector
vector<int> LeaderofArray(vector<int> &v, int n)
{
    vector<int> ans;
    int maxi = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] > maxi)
        {
            ans.push_back(v[i]);
        }
        maxi = max(v[i], maxi);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    auto v1 = LeaderofArray(v, n);
    for (auto &it : v1)
        cout << it << " ";
    cout << endl;
    return 0;
}