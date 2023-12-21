#include <bits/stdc++.h>
using namespace std;
// TC O(nlog n ) & SC O(n)
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    sort(ar, ar + n);
    cout << ar[n - 1] << endl;

    return 0;
}