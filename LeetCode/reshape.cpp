#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> solve(vector<vector<int>> mat, int r, int c)
{
    vector<vector<int>> ans;
    if (r * c != mat.size() * mat[0].size())
        return mat;

    vector<int> temp;
    for (vector<int> a : mat)
        for (int b : a)
            temp.push_back(b);
    int k = 0;
    for (int i = 0; i < r; i++)
    {
        vector<int> row;
        for (int j = 0; j < c; j++)
        {
            row.push_back(temp[k]);
            k++;
        }
        ans.push_back(row);
    }

    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        vector<vector<int>> mat;
        for (int i = 0; i < n; i++)
        {
            vector<int> row;
            for (int j = 0; j < m; j++)
            {
                int v;
                cin >> v;
                row.push_back(v);
            }
            mat.push_back(row);
        }
        vector<vector<int>> ans = solve(mat, r, c);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                cout << ans[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}