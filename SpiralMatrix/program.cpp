#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> spiralTraversal(vector<vector<int>> &mat)
{
    vector<int> res;
    int m = mat.size();
    int n = mat[0].size();
    vector<vector<bool>> vis(m, vector<bool>(n, false));
    vector<int> dx = {0, 1, 0, -1};
    vector<int> dy = {1, 0, -1, 0};
    int r = 0, c = 0, idx = 0;

    for (int i = 0; i < m * n; i++)
    {
        res.push_back(mat[r][c]);
        vis[r][c] = true;
        int newR = r + dx[idx];
        int newC = c + dy[idx];
        if (newR >= 0 && newR < m && newC >= 0 && newC < n && !vis[newR][newC])
        {
            r = newR;
            c = newC;
        }
        else
        {
            idx = (idx + 1) % 4;
            r += dx[idx];
            c += dy[idx];
        }
    }
    return res;
}
// output the matrix in spiral form
void printSpiralMatrix(int rows, int cols, const vector<int> &arr)
{
    cout << "Spiral Traversal in Matrix Form:" << endl;
    int index = 0;
    for (int i = 0; i < rows; i++)
    {
        cout << "| ";
        for (int j = 0; j < cols; j++)
        {
            cout << arr[index++] << " ";
        }
        cout << "|" << endl;
    }
}

// input the matrix
void printMatrix(const vector<vector<int>> &matrix)
{
    cout << "Original Matrix:" << endl;
    for (const auto &row : matrix)
    {
        cout << "| ";
        for (const auto &elem : row)
        {
            cout << elem << " ";
        }
        cout << "|" << endl;
    }
}

int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // original martix
    printMatrix(mat);

    vector<int> res = spiralTraversal(mat);

    int rows = mat.size();
    int cols = mat[0].size();
    printSpiralMatrix(rows, cols, res);

    return 0;
}