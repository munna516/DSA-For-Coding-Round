#include <bits/stdc++.h>
using namespace std;
// TC -> O(n long n) + O(n)  & SC -> O(1)
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    sort(v.begin(), v.end());
    int longest = 1, last_smaller = INT_MIN, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] - 1 == last_smaller)
        {
            count++;
            last_smaller = v[i];
        }
        else if (v[i] != last_smaller)
        {
            count = 1;
            last_smaller = v[i];
        }
        longest = max(longest, count);
    }
    cout << longest << endl;
    return 0;
}