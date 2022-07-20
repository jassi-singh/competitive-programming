#include <bits/stdc++.h>
using namespace std;
#define ceil(x, y) ceil((double)x / (double)y)
#define ll long long
void solve()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0, mx = -1;
        map<int, int> mp;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mx = max(a, mx);
            mp[a]++;
        }
        for (pair<int, int> p : mp)
        {
            if (p.second == 1)
                cnt++;
        }
        if (cnt == 1 and mp[mx] == 1)
        {
            int mxp = -1;
            for (pair<int, int> p : mp)
            {
                mxp = max(mxp, p.second);
            }
            cout << (mxp == 2 ? 2 : 1) << endl;
        }
        else
            cout << ceil(cnt, 2) << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}