#include <bits/stdc++.h>
using namespace std;
#define ll long long
int k, n, m;
int height(int a, int b, vector<vector<bool>> g)
{
    if (!g[a][b])
    {
        return 0;
    }
    else
    {
        int h = 0;
        int c = b;
        while (c < m && b > 0 && a > 0 && g[a - 1][b - 1] && g[a - 1][c + 1])
        {
            h++;
            a--;
            b--;
            c++;
        }
        return h;
    }
}
string compare(vector<vector<bool>> a, vector<vector<bool>> b)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != b[i][j])
                return "NO";
        }
    }
    return "YES";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        vector<vector<bool>> initial, f(n, vector<bool>(m, 0));
        for (int i = 0; i < n; i++)
        {
            vector<bool> r(m);
            string s;
            cin >> s;
            for (int j = 0; j < m; j++)
            {
                r[j] = (s[j] == '*') ? 1 : 0;
            }
            initial.push_back(r);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int d = height(i, j, initial);
                if (d >= k)
                {
                    int a = i, b = j, c = j;
                    f[a][b] = 1;
                    while (c < m && b > 0 && a > 0 && d > 0)
                    {
                        f[a-1][b-1] = 1;
                        b--;
                        f[a-1][c+1] = 1;
                        c++;
                        a--;
                        d--;
                    }
                }
            }
        }
        string ans = compare(initial, f);
        cout << ans << endl;
    }
}