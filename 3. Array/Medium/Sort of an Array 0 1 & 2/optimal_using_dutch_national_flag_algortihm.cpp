#include <bits/stdc++.h>
using namespace std;
// TC -> O(N)   & SC -> O(1)
void dutch_national_flag_algorithm(vector<int> &v, int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (v[mid] == 0)
        {
            swap(v[mid], v[low]);
            mid++;
            low++;
        }
        else if (v[mid] == 1)
            mid++;
        else if (v[mid] == 2)
        {
            swap(v[mid], v[high]);
            high--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;
    dutch_national_flag_algorithm(v, n);
    for (auto &u : v)
        cout << u << " ";
    cout << endl;
    return 0;
}

/*
10
1 0 1 1 0 2 0 1 0 2
*/