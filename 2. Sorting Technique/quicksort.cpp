#include <bits/stdc++.h>
using namespace std;
// TC -> O(n log(n))    &   SC -> O(1)
int partition(vector<int> &ar, int low, int high)
{
    int pivot = ar[low];
    int i = low, j = high;
    while (i < j)
    {
        while (ar[i] <= pivot && i <= high - 1)
            i++;
        while (ar[j] > pivot && j >= low + 1)
            j--;
        if (i < j)
            swap(ar[i], ar[j]);
    }
    swap(ar[low], ar[j]);
    return j;
}
void quicksort(vector<int> &ar, int low, int high)
{
    if (low < high)
    {
        int p = partition(ar, low, high);
        quicksort(ar, low, p - 1);
        quicksort(ar, p + 1, high);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (auto &u : ar)
        cin >> u;
    quicksort(ar, 0, n - 1);
    for (auto &u : ar)
        cout << u << " ";
    cout << endl;
    return 0;
}

/*
9
7 1 5 1 9 3 8 6 2
*/