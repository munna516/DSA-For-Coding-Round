#include <bits/stdc++.h>
using namespace std;
// TC -> O(n^2)  & SC -> O(1) 
bool LinearSearch(vector<int> &v, int value)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == value)
            return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    int longest = 1;
    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        int count = 1;
        while (LinearSearch(v, x + 1) == true)
        {
            x++;
            count++;
        }
        if (count > longest)
            longest = count;
    }
    cout << longest << endl;
    return 0;
}