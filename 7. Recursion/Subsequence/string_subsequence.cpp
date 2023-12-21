#include <bits/stdc++.h>
using namespace std;
/* TC -> O(n)   SC-> O(n) */
void Subsequence(int i, string s1, string s, int n)
{
    if (i >= n)
    {
        cout << s1;
        if (s1.size() == 0)
            cout << "{}";
        cout << endl;
        return;
    }
    // Not Take condition
    Subsequence(i + 1, s1, s, n);

    // Take condition
    s1.push_back(s[i]);
    Subsequence(i + 1, s1, s, n);

    s1.pop_back();
}
int main()
{
    string s, s1;
    cin >> s;
    Subsequence(0, s1, s, s.length());

    return 0;
}