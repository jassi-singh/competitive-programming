#include <bits/stdc++.h>
using namespace std;
#define ceil(x, y) ceil((double)x / (double)y)
#define ll long long
vector<string> allPaths;
void move(vector<vector<int>> &m, int n, int r, int c, string path)
{
    if (r == n - 1 && c == n - 1)
    {
        allPaths.push_back(path);
        return;
    }
    if (r<n-1&&m[r + 1][c])
    {
        path.push_back('D');
        move(m, n, r + 1, c, path);
        path.pop_back();
    }
    if (c<n-1&&m[r][c + 1])
    {
        path.push_back('R');
        move(m, n, r, c + 1, path);
        path.pop_back();
    }
}
vector<string> findPath(vector<vector<int>> &m, int n)
{
    // Your code goes here
    string path = "";
    move(m, n, 0, 0, path);
    return allPaths;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<vector<int>> m = {{1, 0, 0, 0},
                             {1, 1, 0, 1},
                             {1, 1, 0, 0},
                             {0, 1, 1, 1}};
    vector<string> ans = findPath(m, m.size());
    for (string str : ans)
        cout << str << endl;
}
