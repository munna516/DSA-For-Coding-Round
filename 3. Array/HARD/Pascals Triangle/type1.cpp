/* Given Row and column , now find the element at that place */
#include <bits/stdc++.h>
using namespace std;
// row-1 C col-1
// TC -> O(r) && SC -> O(1)
long long NCR(int n, int r)
{
    long long res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}
int main()
{
    int row, col;
    cin >> row >> col;
    cout << NCR(row - 1, col - 1) << endl;
    return 0;
}