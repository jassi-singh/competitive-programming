#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> solve(vector<vector<int>> matrix)
{
    bool col0 = 1;
    int rows = matrix.size();
    int cols = matrix[0].size();
    for (int i = 0; i < rows; i++)
    {
        if (matrix[i][0] == 0)
            col0 = 0;
        for (int j = 1; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = cols - 1; j >= 1; j--)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
        if (col0 == 0)
        {
            matrix[i][0] = 0;
        }
    }

    return matrix;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        vector<vector<int>> mat;
        for (int i = 0; i < m; i++)
        {
            vector<int> a;
            for (int j = 0; j < n; j++)
            {
                int b;
                cin >> b;
                a.push_back(b);
            }
            mat.push_back(a);
        }
        vector<vector<int>> ans = solve(mat);
        for (vector<int> a : ans)
        {
            for (int b : a)
                cout << b << " ";
            cout << endl;
        }
    }
    return 0;
}