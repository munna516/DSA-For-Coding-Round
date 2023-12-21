#include <bits/stdc++.h>
using namespace std;
/* TC -> O(n)   SC-> O(n) */
int Subsequence(int i, int ar[], int n, int target, int sum)
{
    if (i >= n)
    {
        if (sum == target)
            return 1;
        else
            return 0;
    }
    // Not Take condition
    int x = Subsequence(i + 1, ar, n, target, sum);

    // Take condition
    sum += ar[i];
    int y = Subsequence(i + 1, ar, n, target, sum);

    sum -= ar[i];
    return x + y;
}
int main()
{
    int n, target;
    cin >> n >> target;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    cout << Subsequence(0, ar, n, target, 0) << endl;

    return 0;
}