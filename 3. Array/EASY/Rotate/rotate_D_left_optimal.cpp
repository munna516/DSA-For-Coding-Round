#include <bits/stdc++.h>
using namespace std;
// TC O(2n)   && SC O(n) extra O(1)
void leftRotate(int ar[], int n, int d)
{
    d = d % n;
    reverse(ar, ar + d);
    reverse(ar + d, ar + n);
    reverse(ar, ar + n);
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

/*
8 3
1 2 3 4 5 6 7 8
0 1 2 3 4 5 6 7
*/