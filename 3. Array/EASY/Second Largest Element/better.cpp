#include <bits/stdc++.h>
using namespace std;
// TC O(2n) & SC O(n)
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int largest = ar[0];
    for (int i = 1; i < n; i++)
    {
        if (ar[i] > largest)
            largest = ar[i];
    }
    int slargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > slargest && ar[i] != largest)
            slargest = ar[i];
    }
    cout << slargest << endl;

    return 0;
}