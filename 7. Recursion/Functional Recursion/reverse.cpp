#include <bits/stdc++.h>
using namespace std;
/* TC -> O(n)   SC-> O(n) */
void reverse(int i, int ar[], int n)
{
    if (i >= n / 2)
        return;
    swap(ar[i], ar[n - i - 1]);
    reverse(i + 1, ar, n);
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    reverse(0, ar, n);
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";

    return 0;
}