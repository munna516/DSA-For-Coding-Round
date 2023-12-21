#include <bits/stdc++.h>
using namespace std;
// TC -> O(n log(n))    &   SC -> O(n)
void merge(vector<int> &ar, int low, int mid, int high)
{
    vector<int> temp;
    int l = low, r = mid + 1;
    while (l <= mid && r <= high)
    {
        if (ar[l] <= ar[r])
        {
            temp.push_back(ar[l]);
            l++;
        }
        else
        {
            temp.push_back(ar[r]);
            r++;
        }
    }
    while (l <= mid)
    {
        temp.push_back(ar[l]);
        l++;
    }
    while (r <= high)
    {
        temp.push_back(ar[r]);
        r++;
    }
    for (int i = low; i <= high; i++)
        ar[i] = temp[i - low];
}
void mergesort(vector<int> &ar, int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mergesort(ar, low, mid);
    mergesort(ar, mid + 1, high);
    merge(ar, low, mid, high);
}
int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (auto &u : ar)
        cin >> u;
    mergesort(ar, 0, n - 1);
    for (auto &u : ar)
        cout << u << " ";
    cout << endl;
    return 0;
}

/*
9
7 1 5 1 9 3 8 6 2
*/