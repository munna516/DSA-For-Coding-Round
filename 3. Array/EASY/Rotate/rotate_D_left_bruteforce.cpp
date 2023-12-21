#include <bits/stdc++.h>
using namespace std;
// TC O(n+d) && SC  O(n)+O(d)   extra O(d)
void leftRotate(int ar[], int n, int d)
{
    d = d % n;
    int temp[d];
    for (int i = 0; i < d; i++)
        temp[i] = ar[i];
    for (int i = d; i < n; i++)
        ar[i - d] = ar[i];
    for (int i = n - d; i < n; i++)
        ar[i] = temp[i - (n - d)];
}
int main()
{
    int n, d;
    cin >> n >> d;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    leftRotate(ar, n, d);
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;
    return 0;
}

