#include <bits/stdc++.h>
using namespace std;
// TC -> O(n) & SC -> O(1)
void movetoend(int ar[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
        return;
    for (int i = j + 1; i < n; i++)
    {
        if (ar[i] != 0)
        {
            swap(ar[i], ar[j]);
            j++;
        }
    }
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