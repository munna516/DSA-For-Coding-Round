#include <bits/stdc++.h>
using namespace std;
// TC O(n ) & SC O(1)
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (ar[i] != ar[j])
        {
            ar[i + 1] = ar[j];
            i++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;
    return 0;
}