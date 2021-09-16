#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
ll solve(ll c, ll s, ll i, vector<vector<ll>> &a, int m,int* dp)
{
    if (c >= *dp)
    {
        return *dp;
    }
    if (s >= m)
        return *dp = c;
    ll n = a[0].size();
    if (i == n)
    {
        return LONG_MAX;
    }
    return min(solve(c + a[1][i], s + a[0][i], i + 1, a, m,dp), solve(c, s, i + 1, a, m,dp));
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int dp = LONG_MAX;
        int n, m;
        cin >> n >> m;
        vector<vector<ll>> a;
        for (int i = 0; i < 2; i++)
        {
            vector<ll> b;
            for (int j = 0; j < n; j++)
            {
                int k;
                cin >> k;
                b.push_back(k);
            }
            a.push_back(b);
        }
        ll conv = 0, space = 0;
        ll i = 0;
        ll ans = solve(conv, space, i, a, m,&dp);
        if (ans == LONG_MAX)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
}