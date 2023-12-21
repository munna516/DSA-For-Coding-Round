#include <bits/stdc++.h>
using namespace std;
// TC O(n) & SC O(n)
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int largest = ar[0];
    int slargest = INT_MIN;
    // if element > largest update lagrest, second largest and element < largest but element > previous second largest
    for (int i = 1; i < n; i++)
    {
        if (ar[i] > largest)
        {
            slargest = largest;
            largest = ar[i];
        }
        else if (ar[i] < largest && ar[i] > slargest)
        {
            slargest = ar[i];
        }
    }
    cout << slargest << endl;

    return 0;
}