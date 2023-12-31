#include <bits/stdc++.h>
using namespace std;
// TC -> O(2*n*m)   && SC ->O(1)
void setMatrixZero(vector<vector<int>> &matrix, int n, int m)
{
    int col0 = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                if (j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (matrix[i][j] != 0)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }
    }
    if (matrix[0][0] == 0)
    {
        for (int i = 0; i < m; i++)
            matrix[0][i] = 0;
    }
    if (col0 == 0)
    {
        for (int i = 0; i < n; i++)
            matrix[i][0] = 0;
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