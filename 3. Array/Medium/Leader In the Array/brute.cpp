#include <bits/stdc++.h>
using namespace std;
// TC -> O(n^2)  & SC -> O(1) if we ignore ans vector
vector<int> LeaderofArray(vector<int> &v, int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] > v[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            ans.push_back(v[i]);
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