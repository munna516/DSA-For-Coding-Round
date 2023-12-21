#include <bits/stdc++.h>
using namespace std;
// TC O(n) & SC O(n) extra is O(1)
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int temp = ar[0];
    for (int i = 1; i < n; i++)
    {
        ar[i - 1] = ar[i];
    }
    ar[n - 1] = temp;
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;

    return 0;
}