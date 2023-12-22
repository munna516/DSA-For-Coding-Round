#include <bits/stdc++.h>
using namespace std;
// TC -> O(n)+O(nlogn)   & SC -> O(1)
string twosum(vector<int> &v, int target)
{
    int left = 0, right = v.size() - 1;
    sort(v.begin(), v.end());
    while (left < right)
    {
        int sum = v[left] + v[right];
        if (sum == target)
            return "YES";
        else if (sum < target)
            left++;
        else
            right--;
    }
    return "NO";
}
int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;
    cout << twosum(v, target) << endl;

    return 0;
}

/*
6 15
2 5 6 9 8 11
*/