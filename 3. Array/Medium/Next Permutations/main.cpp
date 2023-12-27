#include <bits/stdc++.h>
using namespace std;
void Next_permutaion(vector<int> &v, int n)
{
    int index = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(v.begin(), v.end());
        return;
    }
    for (int i = n - 1; i > index; i--)
    {
        if (v[i] > v[index])
        {
            swap(v[i], v[index]);
            break;
        }
    }
    reverse(v.begin() + index + 1, v.end());
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    Next_permutaion(v, n);
    for (auto &it : v)
        cout << it << " ";
    return 0;
}