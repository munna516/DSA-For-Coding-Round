#include <bits/stdc++.h>
using namespace std;
// TC -> O(n+m)   && SC -> O(n+m)
void Union(int ar1[], int ar2[], int n, int m)
{
    vector<int> v;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (ar1[i] <= ar2[j])
        {
            if (v.size() == 0 || v.back() != ar1[i])
            {
                v.push_back(ar1[i]);
            }
            i++;
        }
        else
        {
            if (v.size() == 0 || v.back() != ar2[j])
            {
                v.push_back(ar2[j]);
            }
            j++;
        }
    }
    while (i < n)
    {
        if (v.size() == 0 || v.back() != ar1[i])
        {
            v.push_back(ar1[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (v.size() == 0 || v.back() != ar2[j])
        {
            v.push_back(ar2[j]);
        }
        j++;
    }
    for (auto &u : v)
        cout << u << " ";
    cout << endl;
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
    Union(ar1, ar2, n, m);

    return 0;
}

/*
7 5
1 1 2 3 5 5 7
2 3 4 4 8
*/