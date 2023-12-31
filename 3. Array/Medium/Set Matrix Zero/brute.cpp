#include <bits/stdc++.h>
using namespace std;
// TC -> O(n*m)*O(n+m) + O(n*m)   && SC -> O(1)
void row(vector<vector<int>> &matrix, int r, int m)
{
    for (int i = 0; i < m; i++)
    {
        if (matrix[r][i] != 0)
            matrix[r][i] = -1;
    }
}
void col(vector<vector<int>> &matrix, int c, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][c] != 0)
            matrix[i][c] = -1;
    }
}
void setMatrixZero(vector<vector<int>> &matrix, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row(matrix, i, n);
                col(matrix, j, m);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    setMatrixZero(matrix, n, m);
    cout << "\nOutput Matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
4 4
1 1 1 1
1 0 0 1
1 0 1 1
1 1 0 1

*/