#include <bits/stdc++.h>
using namespace std;
/* TC -> O(n)   SC-> O(n) */
bool checkPalindrome(string s, int i)
{
    if (i >= s.length() / 2)
        return true;
    if (s[i] != s[s.length() - i - 1])
        return false;
    return checkPalindrome(s, i + 1);
}
int main()
{
    string s;
    cin >> s;
    bool x = checkPalindrome(s, 0);
    if (x)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}