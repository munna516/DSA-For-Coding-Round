#include <bits/stdc++.h>
using namespace std;
// TC -> O(n) + O(n)   & SC -> O(1)
int majority(vector<int> &v, int n)
{
    int cnt = 0, element;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            element = v[i];
        }
        else if (v[i] == element)
            cnt++;
        else if (v[i] != element)
            cnt--;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == element)
            count++;
    }
    if (count > n / 2)
        return element;
    else
        return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;
    cout << majority(v, n) << endl;
    return 0;
}

/*
8
7 5 5 7 2 5 5 7
*/