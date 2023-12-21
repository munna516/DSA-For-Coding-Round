#include <bits/stdc++.h>
using namespace std;
// TC O(n log n) + O(n) & SC O(n)
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    sort(ar, ar + n);
    int largest = ar[n - 1];
    int slargest = INT_MIN;
    for (int i = n - 2; i >= 0; i--)
    {
        if (ar[i] != largest)
        {
            slargest = ar[i];
            break;
        }
    }
    cout << slargest << endl;

    return 0;
}