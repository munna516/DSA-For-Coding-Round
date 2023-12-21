#include <bits/stdc++.h>
using namespace std;
// TC -> O(n log n)+O(m log n)   && SC -> O(n+m)
void Union(int ar1[], int ar2[], int n, int m)
{
    set<int> st;
    for (int i = 0; i < n; i++)
        st.insert(ar1[i]);
    for (int i = 0; i < m; i++)
        st.insert(ar2[i]);
    for (auto it : st)
        cout << it << " ";
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