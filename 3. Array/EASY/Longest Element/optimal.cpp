#include <bits/stdc++.h>
using namespace std;
// TC O(n) & SC O(n)
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int maxx = ar[0];
    for (int i = 1; i < n; i++)
    {
        if (ar[i] > maxx)
            maxx = ar[i];
    }
    cout << maxx << endl;

    return 0;
}