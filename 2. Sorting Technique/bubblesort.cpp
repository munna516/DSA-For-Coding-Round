#include <bits/stdc++.h>
using namespace std;
// TC -> worst,Average is O(n^2) & Best is O(n)    &   SC -> O(1)
// Check Adjacent
void bubble_sort(vector<int> &ar, int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int sw = 0;
        for (int j = 0; j < n - i; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                swap(ar[j], ar[j + 1]);
                sw++;
            }
        }
        if (sw == 0)
            break;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (auto &u : ar)
        cin >> u;
    bubble_sort(ar, n);
    for (auto &u : ar)
        cout << u << " ";
    cout << endl;
    return 0;
}

/*
9
7 1 5 1 9 3 8 6 2
*/