#include <bits/stdc++.h>
using namespace std;
// TC -> O(2n) & SC -> O(n)
void movetoend(int ar[], int n)
{
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] != 0)
            v.push_back(ar[i]);
    }

    for (int i = 0; i < v.size(); i++)
        ar[i] = v[i];
    for (int i = v.size(); i < n; i++)
        ar[i] = 0;
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    movetoend(ar, n);
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    return 0;
}

/*
8
1 2 0 3 8 0 0 7
*/