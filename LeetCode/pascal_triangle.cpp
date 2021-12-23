#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> solve(int numRows)
{
    vector<vector<int>> ans;
    for (int i = 0; i < numRows; i++)
    {
        vector<int> row;
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                row.push_back(1);
            else
                row.push_back(ans[i - 1][j - 1] + ans[i - 1][j]);
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
        int numRows;
        cin >> numRows;
        vector<vector<int>> ans = solve(numRows);
        for (vector<int> r : ans)
        {
            for (int v : r)
                cout << v << " ";
            cout << endl;
        }
    }
    return 0;
}