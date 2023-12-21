#include <bits/stdc++.h>
using namespace std;
// TC -> O(n+m)   && SC -> O(n+m)
void InterSection(int ar1[], int ar2[], int n, int m)
{
    vector<int> v;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (ar1[i] < ar2[j])
            i++;
        else if (ar1[i] > ar2[j])
            j++;
        else
        {
            v.push_back(ar1[i]);
            i++;
            j++;
        }
    }
    for (auto &u : v)
        cout << u << " ";
}
int main()
{
    int n, m;
    cin >> n >> m;
    int ar1[n], ar2[m];
    for (int i = 0; i < n; i++)
        cin >> ar1[i];
    for (int i = 0; i < m; i++)
        cin >> ar2[i];
    InterSection(ar1, ar2, n, m);

    return 0;
}

/*
8 7
1 2 2 3 3 4 5 6
2 3 3 5 6 6 7
*/