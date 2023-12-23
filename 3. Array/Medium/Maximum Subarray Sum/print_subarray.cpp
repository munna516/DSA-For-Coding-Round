#include <bits/stdc++.h>
using namespace std;
// TC -> O(n)  & SC -> O(1)
void print_subarray(vector<int> &v, int n) // Using Kadane's algorithm for max subarray sum
{
    int maxi = LONG_MIN;
    long long sum = 0, start = 0, ans_start = -1, ans_end = -1;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
            start = i;
        sum += v[i];
        if (sum > maxi)
        {
            maxi = sum;
            ans_start = start;
            ans_end = i;
        }
        if (sum < 0)
            sum = 0;
    }
    for (int i = ans_start; i < ans_end; i++)
        cout << v[i] << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    print_subarray(v, n);

    return 0;
}

/*
9
-2 1 -3 4 -1 2 1 -5 4
*/