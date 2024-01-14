/* Given Row , now find all the element at that row */
#include <bits/stdc++.h>
using namespace std;
// TC -> O(N) && SC -> O(1)
void generate_row(int n)
{
    long long res = 1;
    cout << res << " ";
    for (int i = 1; i < n; i++)
    {
        res = res * (n - i);
        res = res / i;
        cout << res << " ";
    }
}
int main()
{
    int row;
    cin >> row;
    generate_row(row);

    return 0;
}