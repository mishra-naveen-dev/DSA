#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>> &mat)
{
    int m = mat.size();
    int n = mat[0].size();

    vector<vector<int>> res(n, vector<int>(m, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[j][m - i - 1] = mat[i][j];
        }
    }
    return res;
}

int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> res = rotateMatrix(mat);
    for (auto &row : res)
    {
        for (auto &n : row)
        {
            cout << n << " ";
        }
        cout << endl;
    }
    return 0;
}