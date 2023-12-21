#include <bits/stdc++.h>
using namespace std;
// TC -> Best,worst,Average(O(N^2))    &   SC -> O(1)
// Select the minimum
void selection_sort(vector<int> &ar, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i; j < n; j++)
        {
            if (ar[j] < ar[mini])
                mini = j;
        }
        if (mini != i)
            swap(ar[i], ar[mini]);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (auto &u : ar)
        cin >> u;
    selection_sort(ar, n);
    for (auto &u : ar)
        cout << u << " ";
    cout << endl;
    return 0;
}

/*
9
7 1 5 1 9 3 8 6 2
*/