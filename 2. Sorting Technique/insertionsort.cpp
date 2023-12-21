#include <bits/stdc++.h>
using namespace std;
// TC -> Best,worst,Average(O(N^2))    &   SC -> O(1)
// Take an element & insert its correct position
void insertion_sort(vector<int> &ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && ar[j - 1] > ar[j])
        {
            swap(ar[j - 1], ar[j]);
            j--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (auto &u : ar)
        cin >> u;
    insertion_sort(ar, n);
    for (auto &u : ar)
        cout << u << " ";
    cout << endl;
    return 0;
}

/*
9
7 1 5 1 9 3 8 6 2
*/