#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool search(vector<vector<int>> &matrix, int target)
{
    int top = 0, down = matrix.size() - 1;
    int rowIndex;
    while (top <= down)
    {
        int mid = (top + down) / 2;
        if (matrix[mid][0] > target)
        {
            down = mid - 1;
            rowIndex = down;
        }
        else if (matrix[mid][0] < target)
        {
            top = mid + 1;
            rowIndex = mid;
        }
        else
            return true;
    }
    if (rowIndex < 0)
        return false;

    vector<int> row = matrix[rowIndex];
    int l = 0, r = row.size() - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (row[mid] > target)
            r = mid - 1;
        else if (row[mid] < target)
            l = mid + 1;
        else
            return true;
    }
    return false;
}
int main()
{
    int m, n, target;
    cin >> m >> n >> target;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    cout << search(matrix, target);
    return 0;
}